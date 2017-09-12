/*
 * Amicable numbers
 *
 * Problem 21
 *
 * Created by quisseh on 11/21/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0021_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0021_H

#include <iostream>

class problem0021 {
public:
    problem0021() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 21;
    const int m_limit = 10000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0021_H
