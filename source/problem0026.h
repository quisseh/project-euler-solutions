/*
 * Reciprocal cycles
 *
 * Problem 26
 *
 * Created by quisseh on 12/5/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0026_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0026_H

#include "peu.h"

class problem0026 {
public:
    problem0026() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 26;
    const int m_ceiling = 999;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0026_H
