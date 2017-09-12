/*
 * 10001st prime
 *
 * Problem 7
 *
 * Created by quisseh on 11/5/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0007_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0007_H

#include "peu.h"

class problem0007 {
public:
    problem0007() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 7;
    const int m_target = 10001;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0007_H
