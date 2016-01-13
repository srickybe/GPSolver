#ifndef CHROMOSOME_HPP
#define CHROMOSOME_HPP

#include <iostream>

namespace gps {

    class Chromosome {
    public:
        static Chromosome randomChromosome(int nBases, int nBasesPerGene);

        Chromosome();
        Chromosome(Chromosome const & chr);
        Chromosome& operator=(Chromosome const & chr);
        ~Chromosome();

        bool operator==(Chromosome const & chr);
        bool getBase(int i)const;
        int getNumberOfBases()const;
        int getNumberOfBasesPerGene()const;
        int numberOfGenes()const;
        void setBase(int i, bool val);
        void setNumberOfBases(int nBases);
        void setNumberOfBasesPerGene(int nBasesPerGene);
        template<class Fitness, class Evaluation>
        double computeFitness(Fitness fitness, Evaluation evaluation)const;
        int convertToDecimal()const;
        int convertToDecimal(int begin, int end)const;
        void convertGenesToDecimals(int * decimals)const;
        void crossOverWith(Chromosome chr2);
        template<class Evaluation>
        double evaluateWith(Evaluation evaluation)const;
        void mutate(double rate);
        std::string toString()const;

    private:
        bool * bases;
        int nBases;
        int nBasesPerGene;
        void copy(Chromosome const & chr);
        void copyBases(bool * bases, int n_bases);

    };

}

#endif // CHROMOSOME_HPP
