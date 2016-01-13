#include "LCEBEvaluation.hpp"
#include "LeCompteEstBon.hpp"
#include "Chromosome.hpp"
#include <boost/scoped_array.hpp>
#include <map>
#include <stack>

namespace gps {

    char const LCEBEvaluation::OPERATORS[] = {'*', '+', '-', '/'};

    LCEBEvaluation::LCEBEvaluation(boost::shared_ptr<LeCompteEstBon> const & game) {
        this->game = game;
    }

    char const * const LCEBEvaluation::getOperators()const {
        return OPERATORS;
    }

    boost::shared_ptr<double> LCEBEvaluation::evaluate(Chromosome const & chr)const {
        int length = chr.numberOfGenes();
        boost::scoped_array<int> decimals(new int[length]);
        chr.convertGenesToDecimals(decimals.get());
        boost::shared_ptr<double> res;

        if (!isValidSequence(decimals.get()))
            return res;

        /*std::stack<double> operands;

        for(int i = 0; i < length; ++i){
            int index = decimals[i];
            int nDrawnBooklets = game.getNumberOfDrawnBooklets();

            if(index < nDrawnBooklets){
                operands.push((double)game.getDrawnBooklet(index));
            }
            else{
                if(index < nDrawnBooklets + OPERATORS.length){
                    double operand2;
                    double operand1;

                    try{
                        operand2 = operands.pop();
                    }
                    catch(EmptyStackException e){
                        return res;
                    }
                    
                    try{
                        operand1 = operands.pop();
                    }
                    catch(EmptyStackException e){
                        return res;
                    }

                    if(res == null){
                        res = 0.0;
                    }

                    switch(OPERATORS[(index-nDrawnBooklets)]){
                        case '*':
                            res = operand1 * operand2;
                            break;

                        case '/':
                            if( operand2 != 0.0f && operand1 != 0.0f &&
                                    operand1 % operand2 == 0){
                                res = operand1 / operand2;
                            }
                            else{
                                res = null;
                                return res;
                            }

                            break;

                        case '+':
                            res = operand1 + operand2;
                            break;

                        case '-':
                            res = operand1 - operand2;
                            break;

                        default:
                            break;
                    }

                    operands.push(res);
                }
            }
        }*/

        return res;
    }

    bool LCEBEvaluation::isValidSequence(int * decimals)const {
        /*std::map<int, int> frequencies;
        int nDrawnBooklets = game.getNumberOfDrawnBooklets();
        
        for(Integer i: decimals){
            if(i < nDrawnBooklets){
                Integer drawnBooklet = game.getDrawnBooklet(i);
                
                if(frequencies.containsKey(drawnBooklet)){
                    frequencies.put(
                            drawnBooklet, 
                            frequencies.get(drawnBooklet) + 1);

                    if(frequencies.get(drawnBooklet) > 
                            game.getBookletsFrequency().get(drawnBooklet)){
                            return false;
                    }
                }
                else{
                    frequencies.put(drawnBooklet, 1);
                }
            }
        }*/

        return true;
    }
}

