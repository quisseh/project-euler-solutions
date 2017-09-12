/*
 * Double-base palindromes
 *
 * Problem 36
 *
 * Created by quisseh on 12/20/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0036_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0036_H

#include "peu.h"
#include <bitset>

class problem0036 {
public:
    problem0036() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 36;
    const int m_ceiling = 1000000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0036_H
