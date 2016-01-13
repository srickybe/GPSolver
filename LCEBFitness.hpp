#ifndef LCEBFITNESS_HPP
#define LCEBFITNESS_HPP

namespace gps {

    class LCEBFitness {
    public:
        LCEBFitness(double target);
        double computeFitness(double eval)const;
        bool isSolution(double eval, double precision)const;

    private:
        double target;
    };

}

#endif // LCEBFITNESS_HPP
