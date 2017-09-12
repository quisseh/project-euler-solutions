/*
 * Lattice paths
 *
 * Problem 15
 *
 * Created by quisseh on 11/16/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0015_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0015_H

#include "peu.h"

class problem0015 {
public:
    problem0015() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 15;
    const unsigned long long m_x = 20;
    const unsigned long long m_y = 20;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0015_H
