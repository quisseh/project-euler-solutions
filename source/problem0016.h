/*
 * Power digit sum
 *
 * Problem 16
 *
 * Created by quisseh on 11/18/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0016_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0016_H

#include "peu.h"

class problem0016 {
public:
    problem0016() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 16;
    const int m_power = 1000;
    const std::string m_digit = "2";
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0016_H
