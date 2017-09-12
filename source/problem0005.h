/*
 * Smallest multiple
 *
 * Problem 5
 *
 * Created by quisseh on 11/4/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0005_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0005_H

#include <iostream>

class problem0005 {
public:
    problem0005() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 5;
    const int m_ceiling = 20;
    const int m_floor = 1;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0005_H
