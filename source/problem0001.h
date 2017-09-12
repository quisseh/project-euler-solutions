/*
 * Multiples of 3 and 5
 *
 * Problem 1
 *
 * Created by quisseh on 11/1/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0001_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0001_H

#include <iostream>

class problem0001 {
public:
    problem0001() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    int getSumDivisibleBy(int div);

    const int m_problemNumber = 1;
    const int m_target = 999;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0001_H
