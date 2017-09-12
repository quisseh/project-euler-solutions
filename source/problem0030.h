/*
 * Digit fifth powers
 *
 * Problem 30
 *
 * Created by quisseh on 12/14/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0030_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0030_H

#include <iostream>
#include <math.h>

class problem0030 {
public:
    problem0030() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 30;
    const int m_min = 10;
    const int m_max = 200000;
    const int m_power = 5;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0030_H
