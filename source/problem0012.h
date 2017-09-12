/*
 * Highly divisible triangular number
 *
 * Problem 12
 *
 * Created by quisseh on 11/9/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0012_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0012_H

#include <iostream>
#include <math.h>

class problem0012 {
public:
    problem0012() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 12;
    const int m_target = 500;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0012_H
