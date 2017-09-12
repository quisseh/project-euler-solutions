/*
 * Distinct primes factors
 *
 * Problem 47
 *
 * Created by quisseh on 1/3/16.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0047_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0047_H

#include "peu.h"

class problem0047 {
public:
    problem0047() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 47;

    int numDistinctPrimeFactors(int num);
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0047_H
