/*
 * Names scores
 *
 * Problem 22
 *
 * Created by quisseh on 12/1/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0022_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0022_H

#include "peu.h"
#include <fstream>

class problem0022 {
public:
    problem0022() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 22;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0022_H
