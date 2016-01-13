#include "GPSolver.hpp"
#include "Util.hpp"

namespace gps {

    template<class Evaluation, class Fitness>
    GPSolver<Evaluation, Fitness>::GPSolver(
            Fitness const & fit,
            Evaluation const & eval,
            PopulationParameters const & pop,
            int maxGens)
    : chrs(pop.getSize()),
    children(pop.getSize()),
    solutions(),
    fitness(fit),
    evaluation(eval),
    population(pop),
    fitnesses(pop.getSize()),
    evals(pop.getSize()),
    rouletteWheel(pop.getSize()),
    maxGenerations(maxGens) {
        bestFit = chrs[0];
    }

    template<class Evaluation, class Fitness>
    Chromosome const & GPSolver<Evaluation, Fitness>::getBestFit() const {
        return bestFit;
    }

    template<class Evaluation, class Fitness>
    std::vector<Chromosome> const & GPSolver<Evaluation, Fitness>::computeSolution() {
        int nGenerations = 0;
        generateRandomPopulation();
        evaluatePopulation();

        while (!hasSolution() && nGenerations < maxGenerations) {
            computePopulationFitness();
            computeRouletteWheel();
            generateNewPopulation();
            evaluatePopulation();
            ++nGenerations;
        }

        computePopulationFitness();

        return solutions;
    }

    template<class Evaluation, class Fitness>
    void GPSolver<Evaluation, Fitness>::computePopulationFitness() {
        int index = -1;
        double bestFitness;
        bestFitness = fitness.computeFitness(evaluation.evaluate(bestFit));

        for (int i = 0; i < population.getSize(); ++i) {
            fitnesses[i] = fitness.computeFitness(evals[i]);

            if (fitnesses[i] != 0) {
                if (bestFitness != 0) {
                    if (*fitnesses[i] > bestFitness) {
                        bestFitness = *fitnesses[i];
                        index = i;
                    }
                } else {
                    bestFitness = *fitnesses[i];
                    index = i;
                }
            }
        }

        if (index != -1) {
            bestFit = chrs[index];
        }
    }

    template<class Evaluation, class Fitness>
    void GPSolver<Evaluation, Fitness>::computeRouletteWheel() {
        Util::accumulate(
                fitnesses,
                Util::sum(fitnesses),
                rouletteWheel);
    }

    template<class Evaluation, class Fitness>
    void GPSolver<Evaluation, Fitness>::generateRandomPopulation() {
        chrs = new Chromosome[population.getSize()];

        for (int i = 0; i < population.getSize(); ++i) {
            chrs[i] = Chromosome::randomChromosome(
                    population.getNumberOfBases(),
                    population.getNumberOfBasesPerGene());
        }
    }

    template<class Evaluation, class Fitness>
    void GPSolver<Evaluation, Fitness>::evaluatePopulation() {
        for (int i = 0; i < population.getSize(); ++i) {
            evals[i] = chrs[i].evaluateWith(evaluation);
        }
    }

    template<class Evaluation, class Fitness>
    void GPSolver<Evaluation, Fitness>::generateNewPopulation() {
        for (int i = 0, j = 0; i < population.getSize() / 2; ++i, ++j) {
            Chromosome child1 = selectChromosomeWithRouletteWheel();
            Chromosome child2 = selectChromosomeWithRouletteWheel();
            crossOverChromosomes(child1, child2);
            mutateChromosome(child1);
            mutateChromosome(child2);
            children[j] = child1;
            children[++j] = child2;
        }

        chrs = children;
    }

    template<class Evaluation, class Fitness>
    int GPSolver<Evaluation, Fitness>::rouletteWheelSelection() {
        double r;
        r = Util::randomDouble();

        for (int index = 0; index < rouletteWheel.size(); ++index) {
            if (rouletteWheel[index] >= r) {
                return index;
            }
        }

        return rouletteWheel.size() - 1;
    }

    template<class Evaluation, class Fitness>
    Chromosome const & GPSolver<Evaluation, Fitness>::selectChromosomeWithRouletteWheel() {
        return chrs[rouletteWheelSelection()];
    }

    template<class Evaluation, class Fitness>
    void GPSolver<Evaluation, Fitness>::crossOverChromosomes(Chromosome & chr1, Chromosome & chr2) {
        if (Util::randomDouble() < population.getCrossOverRate())
            chr1.crossOverWith(chr2);
    }

    template<class Evaluation, class Fitness>
    void GPSolver<Evaluation, Fitness>::mutateChromosome(Chromosome & chr) {
        chr.mutate(population.getMutationRate());
    }

    template<class Evaluation, class Fitness>
    bool GPSolver<Evaluation, Fitness>::hasSolution() {
        double precision = 1.0e-6;
        solutions.clear();

        for (int i = 0; i < population.getSize(); ++i) {
            if (fitness.isSolution(evals[i], precision)) {
                solutions.push_back(chrs[i]);
            }
        }

        return !solutions.empty();
    }
}

