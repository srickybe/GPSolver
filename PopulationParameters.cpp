#include "PopulationParameters.hpp"

namespace gps {

    PopulationParameters::PopulationParameters() {
        size = DEFAULT_SIZE;
        nBases = DEFAULT_NUMBER_OF_BASES;
        nBasesPerGene = DEFAULT_NUMBER_OF_BASES_PER_GENE;
        mutationRate = DEFAULT_MUTATION_RATE;
        crossOverRate = DEFAULT_CROSS_OVER_RATE;
    }

    PopulationParameters::PopulationParameters(
            int size,
            int nBases,
            int nBasesPerGene,
            double mutationRate,
            double crossOverRate) {
        this->size = size;
        this->nBases = nBases;
        this->nBasesPerGene = nBasesPerGene;
        this->mutationRate = mutationRate;
        this->crossOverRate = crossOverRate;
    }

    PopulationParameters::PopulationParameters(PopulationParameters const & left) {
        this->size = left.size;
        this->nBases = left.nBases;
        this->nBasesPerGene = left.nBasesPerGene;
        this->mutationRate = left.mutationRate;
        this->crossOverRate = left.crossOverRate;
    }

    int PopulationParameters::getSize()const {
        return size;
    }

    int PopulationParameters::getNumberOfBases()const {
        return nBases;
    }

    int PopulationParameters::getNumberOfBasesPerGene()const {
        return nBasesPerGene;
    }

    double PopulationParameters::getMutationRate()const {
        return mutationRate;
    }

    double PopulationParameters::getCrossOverRate()const {
        return crossOverRate;
    }
}

