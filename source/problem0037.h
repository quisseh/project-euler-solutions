/*
 * Truncatable primes
 *
 * Problem 37
 *
 * Created by quisseh on 12/20/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0037_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0037_H

#include "peu.h"

class problem0037 {
public:
    problem0037() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 37;
    const int m_min = 11;
    const int m_max = 800000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0037_H
