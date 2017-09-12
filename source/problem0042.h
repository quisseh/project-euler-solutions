/*
 * Coded triangle numbers
 *
 * Problem 42
 *
 * Created by quisseh on 1/1/16.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0042_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0042_H

#include "peu.h"
#include <fstream>

class problem0042 {
public:
    problem0042() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 42;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0042_H
