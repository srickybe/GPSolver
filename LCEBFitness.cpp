#include "LCEBFitness.hpp"
#include <cmath>

namespace gps {

    LCEBFitness::LCEBFitness(double target) {
        this->target = target;
    }

    double LCEBFitness::computeFitness(double eval)const {
        return 10000.0 / std::abs(target - eval);
    }

    bool LCEBFitness::isSolution(double eval, double precision)const {
        return std::abs(eval - target) < precision;
    }
}

