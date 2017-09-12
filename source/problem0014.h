/*
 * Longest Collatz sequence
 *
 * Problem 14
 *
 * Created by quisseh on 11/15/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0014_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0014_H

#include <iostream>

class problem0014 {
public:
    problem0014() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 14;
    const int m_ceiling = 999999;
    const int m_floor = 1;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0014_H
