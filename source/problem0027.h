/*
 * Quadratic primes
 *
 * Problem 27
 *
 * Created by quisseh on 12/6/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0027_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0027_H

#include "peu.h"

class problem0027 {
public:
    problem0027() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 27;
    const int m_min = -999;
    const int m_max = 999;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0027_H
