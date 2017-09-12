/*
 * Pandigital products
 *
 * Problem 32
 *
 * Created by quisseh on 12/18/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0032_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0032_H

#include "peu.h"
#include <unordered_set>
#include <numeric>

class problem0032 {
public:
    problem0032() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 32;
    const int m_panMin = 1;
    const int m_panMax = 9;
    const int m_multipleMax = 2000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0032_H
