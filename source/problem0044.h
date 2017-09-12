/*
 * Pentagon numbers
 *
 * Problem 44
 *
 * Created by quisseh on 1/1/16.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0044_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0044_H

#include <iostream>
#include <vector>
#include <math.h>

class problem0044 {
public:
    problem0044() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 44;
    const int m_max = 3000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0044_H
