/*
 * Prime pair sets
 *
 * Problem 60
 *
 * Created by quisseh on 4/17/17.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0060_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0060_H

#include "peu.h"
#include <numeric>

class problem0060 {
public:
    problem0060() {}

    int getProblemNumber() { return 60; }

    void run();

private:
    int concat(int x, int y);

    bool isPrimePair(std::vector<int> &primes, int n);

    bool getLowestPrimePairSet(std::vector<int> &primes, int n, int min);
};

#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0060_H
