/*
 * Digit cancelling fractions
 *
 * Problem 33
 *
 * Created by quisseh on 12/19/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0033_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0033_H

#include "peu.h"

class problem0033 {
public:
    problem0033() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 33;
    const int m_min = 10;
    const int m_max = 99;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0033_H
