/*
 * Circular primes
 *
 * Problem 35
 *
 * Created by quisseh on 12/19/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0035_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0035_H

#include "peu.h"

class problem0035 {
public:
    problem0035() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 35;
    const int m_max = 999999;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0035_H
