/*
 * 1000-digit Fibonacci number
 *
 * Problem 25
 *
 * Created by quisseh on 12/4/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0025_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0025_H

#include "peu.h"

class problem0025 {
public:
    problem0025() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 25;
    const int m_target = 1000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0025_H
