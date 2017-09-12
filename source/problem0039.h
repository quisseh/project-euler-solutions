/*
 * Integer right triangles
 *
 * Problem 39
 *
 * Created by quisseh on 12/22/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0039_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0039_H

#include <iostream>

class problem0039 {
public:
    problem0039() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 39;
    const int m_min = 12;
    const int m_max = 1000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0039_H
