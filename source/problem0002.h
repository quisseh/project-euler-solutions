/*
 * Even Fibonacci numbers
 *
 * Problem 2
 *
 * Created by quisseh on 11/1/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0002_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0002_H

#include <iostream>

class problem0002 {
public:
    problem0002() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 2;
    const int m_target = 4000000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0002_H
