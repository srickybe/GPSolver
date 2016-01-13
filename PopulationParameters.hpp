#ifndef POPULATIONPARAMETERS_HPP
#define POPULATIONPARAMETERS_HPP

namespace gps {

    class PopulationParameters {
    public:
        PopulationParameters();
        PopulationParameters(PopulationParameters const & left);
        PopulationParameters(
                int size,
                int nBases,
                int nBasesPerGene,
                double mutationRate,
                double crossOverRate);
        int getSize()const;
        int getNumberOfBases()const;
        int getNumberOfBasesPerGene()const;
        double getMutationRate()const;
        double getCrossOverRate()const;

    private:
        static int const DEFAULT_SIZE = 1000;
        static int const DEFAULT_NUMBER_OF_BASES = 13;
        static int const DEFAULT_NUMBER_OF_BASES_PER_GENE = 4;
        static double const DEFAULT_MUTATION_RATE = 0.01;
        static double const DEFAULT_CROSS_OVER_RATE = 0.5;

        int size;
        int nBases;
        int nBasesPerGene;
        double mutationRate;
        double crossOverRate;

    };

}

#endif // POPULATIONPARAMETERS_HPP
