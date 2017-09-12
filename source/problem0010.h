/*
 * Summation of primes
 *
 * Problem 10
 *
 * Created by quisseh on 11/8/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0010_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0010_H

#include "peu.h"

class problem0010 {
public:
    problem0010() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 10;
    const int m_ceiling = 2000000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0010_H
