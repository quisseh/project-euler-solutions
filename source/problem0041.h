/*
 * Pandigital prime
 *
 * Problem 41
 *
 * Created by quisseh on 12/31/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0041_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0041_H

#include "peu.h"

class problem0041 {
public:
    problem0041() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 41;
    const int m_max = 9999999;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0041_H
