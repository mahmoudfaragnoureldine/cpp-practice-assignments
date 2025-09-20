#include <iostream>
#include <chrono>
#include <random>

class TimerSeed
{
    private:
        std::mt19937_64 rng_;
    public:
        TimerSeed()
        {
            auto now = std::chrono::high_resolution_clock::now().time_since_epoch().count();
            std::random_device rd;
            std::seed_seq seq{
                static_cast<unsigned int>(now),
                static_cast<unsigned int>(now >> 32),
                rd(), rd(), rd(), rd()
            };
            rng_.seed(seq);
        }

        double real(double min, double max)
        {
            std::uniform_real_distribution<double> dist(min, max);
            return dist(rng_);
        }
};

int main() {
    TimerSeed gen;

    double x = gen.real(1.0, 10.0);

    std::cout << "Random Number [1.0 - 10.0]: " << x << std::endl;

    return 0;
}