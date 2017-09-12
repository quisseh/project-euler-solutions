/*
 * Special Pythagorean triplet
 *
 * Problem 9
 *
 * Created by quisseh on 11/8/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0009_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0009_H

#include <iostream>
#include <math.h>

class problem0009 {
public:
    problem0009() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 9;
    const int m_target = 1000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0009_H
