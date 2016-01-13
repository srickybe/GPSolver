#include "Chromosome.hpp"
#include "Util.hpp"
#include <algorithm>

namespace gps {

    Chromosome Chromosome::randomChromosome(int nBases, int nBasesPerGene) {
        Chromosome res;
        res.setNumberOfBases(nBases);
        res.setNumberOfBasesPerGene(nBasesPerGene);

        for (int i = 0; i < nBases; ++i) {
            res.bases[i] = Util::randomBoolean();
        }

        return res;
    }

    Chromosome::Chromosome()
    : bases(0), nBases(0), nBasesPerGene(0) {
    }

    Chromosome::Chromosome(Chromosome const & chr) {
        copy(chr);
    }

    Chromosome& Chromosome::operator=(Chromosome const & chr) {
        copy(chr);
        return *this;
    }

    void Chromosome::copy(Chromosome const & chr) {
        setNumberOfBases(chr.nBases);
        setNumberOfBasesPerGene(chr.nBasesPerGene);
        copyBases(chr.bases, chr.nBases);
    }

    void Chromosome::copyBases(bool * source, int n_bases) {
        std::copy<bool*, bool*>(source, &source[n_bases] + 1, bases);
    }

    Chromosome::~Chromosome() {
        delete [] bases;
    }

    bool Chromosome::operator==(Chromosome const & left) {
        if (&(*this) != &left) {
            if (nBases != left.nBases || nBasesPerGene != left.nBasesPerGene)
                return false;

            for (int i = 0; i < nBases; ++i)
                if (bases[i] != left.bases[i])
                    return false;

            return true;
        }

        return true;
    }

    bool Chromosome::getBase(int i)const {
        return bases[i];
    }

    int Chromosome::getNumberOfBases()const {
        return nBases;
    }

    void Chromosome::setBase(int i, bool val) {
        bases[i] = val;
    }

    void Chromosome::setNumberOfBases(int nBases) {
        this->nBases = nBases;
        bases = new bool[this->nBases];
    }

    int Chromosome::getNumberOfBasesPerGene()const {
        return nBasesPerGene;
    }

    void Chromosome::setNumberOfBasesPerGene(int nBasesPerGene) {
        this->nBasesPerGene = nBasesPerGene;
    }

    int Chromosome::numberOfGenes()const {
        return nBases / nBasesPerGene;
    }

    int Chromosome::convertToDecimal(int begin, int end)const {
        if (nBases < 1 ||
                begin < 0 ||
                begin >= nBases ||
                end <= 0 ||
                end > nBases) {
            return -1;
        }

        int power = 1;
        int decimal = 0;
        int i = end - 1;

        while (i >= begin) {
            if (bases[i]) {
                decimal += power;
            }

            power *= 2;
            --i;
        }

        return decimal;
    }

    int Chromosome::convertToDecimal()const {
        return convertToDecimal(0, nBases);
    }

    void Chromosome::convertGenesToDecimals(int * decimals)const {
        int length = numberOfGenes();

        for (int i = 0, j = 0; i < length; j = ++i * nBasesPerGene)
            decimals[i] = convertToDecimal(j, j + nBasesPerGene);
    }

    template<class Fitness, class Evaluation>
    double Chromosome::computeFitness(Fitness fitness, Evaluation evaluation)const {
        return fitness.computeFitness(evaluation.evaluate(this));
    }

    void Chromosome::crossOverWith(Chromosome chr2) {
        int r = Util::randomInteger(0, nBases);
        std::cout << "r = " << r << "\n";

        for (int i = r; i < nBases; ++i) {
            std::swap<bool>(bases[i], chr2.bases[i]);
        }
    }

    template<class Evaluation>
    double Chromosome::evaluateWith(Evaluation evaluation)const {
        return evaluation.evaluate(this);
    }

    void Chromosome::mutate(double rate) {
        for (int i = 0; i < nBases; ++i) {
            if (Util::randomDouble() < rate)
                bases[i] = !bases[i];
        }
    }

    std::string Chromosome::toString()const {
        std::string res;

        for (int i = 0; i < nBases; ++i) {
            if (bases[i])
                res += "1";
            else
                res += "0";
        }

        return res;
    }
}

