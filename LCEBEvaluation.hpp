#ifndef LCEBEVALUATION_HPP
#define LCEBEVALUATION_HPP
#include <boost/shared_ptr.hpp>
#include <map>

namespace gps {
    class LeCompteEstBon;
    class Chromosome;

    class LCEBEvaluation {
    public:
        LCEBEvaluation(boost::shared_ptr<LeCompteEstBon> const & game);
        ~LCEBEvaluation();
        char const * const getOperators()const;
        boost::shared_ptr<double> evaluate(Chromosome const & chr)const;
        bool isValidSequence(int * decimals)const;

    private:
        static char const OPERATORS[];
        boost::shared_ptr<LeCompteEstBon> game;
    };

}

#endif // LCEBEVALUATION_HPP
