/*
 * Digit factorials
 *
 * Problem 34
 *
 * Created by quisseh on 12/19/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0034_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0034_H

#include "peu.h"

class problem0034 {
public:
    problem0034() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 34;
    const int m_min = 10;
    const int m_max = 50000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0034_H
