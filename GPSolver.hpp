#ifndef GPSOLVER_HPP
#define GPSOLVER_HPP
#include <boost/shared_ptr.hpp>
#include <vector>
#include "Chromosome.hpp"
#include "PopulationParameters.hpp"

namespace gps {

    template<class Evaluation, class Fitness>
    class GPSolver {
    public:
        GPSolver(
                Fitness const & fitness,
                Evaluation const & evaluation,
                PopulationParameters const & population,
                int maxGenerations);

        std::vector<Chromosome> const & computeSolution();
        Chromosome const & getBestFit() const;

    private:
        typedef boost::shared_ptr<double> double_ptr;
        std::vector<Chromosome> chrs;
        std::vector<Chromosome> children;
        std::vector<Chromosome> solutions;
        Chromosome bestFit;
        Fitness fitness;
        Evaluation evaluation;
        PopulationParameters population;
        std::vector<double_ptr> fitnesses;
        std::vector<double_ptr> evals;
        std::vector<double> rouletteWheel;
        int maxGenerations;

        void computePopulationFitness();
        void computeRouletteWheel();
        void crossOverChromosomes(Chromosome & chr1, Chromosome & chr2);
        void evaluatePopulation();
        void generateNewPopulation();
        void generateRandomPopulation();
        bool hasSolution();
        void mutateChromosome(Chromosome & chr);
        int rouletteWheelSelection();
        Chromosome const & selectChromosomeWithRouletteWheel();
    };

}

#endif // GPSOLVER_HPP
