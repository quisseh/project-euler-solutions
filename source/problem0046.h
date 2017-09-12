/*
 * Goldbach's other conjecture
 *
 * Problem 46
 *
 * Created by quisseh on 1/3/16.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0046_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0046_H

#include "peu.h"

class problem0046 {
public:
    problem0046() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 46;

    bool conjecture(int num);
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0046_H
