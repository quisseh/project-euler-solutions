/*
 * Factorial digit sum
 *
 * Problem 20
 *
 * Created by quisseh on 11/21/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0020_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0020_H

#include "peu.h"

class problem0020 {
public:
    problem0020() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 20;
    const int m_target = 100;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0020_H
