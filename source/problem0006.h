/*
 * Sum square difference
 *
 * Problem 6
 *
 * Created by quisseh on 11/4/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0006_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0006_H

#include <iostream>

class problem0006 {
public:
    problem0006() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 6;
    const int m_ceiling = 100;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0006_H
