/*
 * Distinct powers
 *
 * Problem 29
 *
 * Created by quisseh on 12/8/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0029_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0029_H

#include <iostream>
#include <unordered_set>
#include <math.h>

class problem0029 {
public:
    problem0029() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 29;
    const int m_min = 2;
    const int m_max = 100;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0029_H
