/*
 * Largest prime factor
 *
 * Problem 3
 *
 * Created by quisseh on 11/2/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0003_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0003_H

#include <iostream>
#include <math.h>

class problem0003 {
public:
    problem0003() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 3;
    const long m_target = 600851475143;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0003_H
