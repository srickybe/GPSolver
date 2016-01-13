#include "Util.hpp"
//#include <ctime>

namespace gps {

    void Util::accumulate(
            std::vector<boost::shared_ptr<double> > & values,
            double sum,
            std::vector<double> & res) {
        if (values[0] != 0)
            res[0] = *values[0] / sum;
        else
            res[0] = 0.0;

        for (int unsigned i = 1; i < res.size(); ++i) {
            if (values[i] != 0)
                res[i] = res[i - 1] + *values[i] / sum;
            else
                res[i] = res[i - 1];
        }
    }

    bool Util::randomBoolean() {
        return randomInteger() % 2 == 1 ? true : false;
    }

    double Util::randomDouble() {
        static generator_t rng(time(0));
        static variate_real_generator_t rndm(rng, uniform_real_distribution_t(0.0, 1.0));
        return rndm();
    }

    int Util::randomInteger() {
        static generator_t rng(time(0));
        static variate_int_generator_t rndm(rng, uniform_int_distribution_t());
        return rndm();
    }

    int Util::randomInteger(int min, int max) {
        return min + randomInteger() % (max - min);
    }

    double Util::sum(std::vector<boost::shared_ptr<double> > const & values) {
        double sum = 0.0;

        for (int unsigned i = 0; i < values.size(); ++i) {
            if (values[i] != 0)
                sum += *values[i];
        }

        return sum;
    }
}

