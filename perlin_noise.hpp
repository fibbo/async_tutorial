#include <vector>

// THIS CLASS IS A TRANSLATION TO C++11 FROM THE REFERENCE
// JAVA IMPLEMENTATION OF THE IMPROVED PERLIN FUNCTION (see http://mrl.nyu.edu/~perlin/noise/)
// THE ORIGINAL JAVA IMPLEMENTATION IS COPYRIGHT 2002 KEN PERLIN

// I ADDED AN EXTRA METHOD THAT GENERATES A NEW PERMUTATION VECTOR (THIS IS NOT PRESENT IN THE ORIGINAL IMPLEMENTATION)

#ifndef perlin_noise_H
#define perlin_noise_H

class perlin_noise {
    // The permutation vector
    std::vector<int> p;
public:
    // Initialize with the reference values for the permutation vector
    perlin_noise();
    // Generate a new permutation vector based on the value of seed
    perlin_noise(unsigned int seed);
    // Get a noise value, for 2D images z can have any value
    double noise(double x, double y, double z);
private:
    double fade(double t);
    double lerp(double t, double a, double b);
    double grad(int hash, double x, double y, double z);
};

#endif
