/*
 * Champernowne's constant
 *
 * Problem 40
 *
 * Created by quisseh on 12/26/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0040_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0040_H

#include <iostream>

class problem0040 {
public:
    problem0040() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 40;
    const int m_ceiling = 1000000;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0040_H
