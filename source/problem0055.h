/*
 * Lychrel numbers
 *
 * Problem 55
 *
 * Created by quisseh on 9/20/16.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0055_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0055_H

#include "peu.h"

class problem0055 {
public:
    problem0055() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 55;

    bool isLychrel(int n);
};

#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0055_H
