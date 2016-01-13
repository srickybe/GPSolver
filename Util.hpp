#ifndef UTIL_HPP
#define UTIL_HPP

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>
#include <boost/random/uniform_real_distribution.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/shared_ptr.hpp>
#include <vector>

namespace gps {

    class Util {
    public:
        static void accumulate(
                std::vector<boost::shared_ptr<double> > & values,
                double sum,
                std::vector<double> & res);
        static bool randomBoolean();
        static double randomDouble();
        static int randomInteger();
        static int randomInteger(int min, int max);
        static double sum(std::vector<boost::shared_ptr<double> > const &);

    private:
        typedef boost::random::mt19937 generator_t;
        typedef boost::random::uniform_int_distribution<> uniform_int_distribution_t;
        typedef boost::random::uniform_real_distribution<> uniform_real_distribution_t;
        typedef boost::variate_generator<generator_t&, uniform_int_distribution_t >
        variate_int_generator_t;
        typedef boost::variate_generator<generator_t&, uniform_real_distribution_t >
        variate_real_generator_t;
    };
}

#endif // UTIL_HPP
