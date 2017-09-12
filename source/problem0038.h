/*
 * Pandigital multiples
 *
 * Problem 38
 *
 * Created by quisseh on 12/20/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0038_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0038_H

#include "peu.h"

class problem0038 {
public:
    problem0038() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 38;
    const int m_panMin = 1;
    const int m_panMax = 9;
    const int m_min = 1;
    const int m_max = 10000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0038_H
