/*
 * Largest palindrome product
 *
 * Problem 4
 *
 * Created by quisseh on 11/3/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0004_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0004_H

#include <iostream>

class problem0004 {
public:
    problem0004() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 4;
    const int m_ceiling = 999;
    const int m_floor = 100;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0004_H
