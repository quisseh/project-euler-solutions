/*
 * Number spiral diagonals
 *
 * Problem 28
 *
 * Created by quisseh on 12/2/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0028_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0028_H

#include <iostream>

class problem0028 {
public:
    problem0028() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 28;
    const int m_size = 1001;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0028_H
