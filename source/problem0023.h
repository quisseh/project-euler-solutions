/*
 * Non-abundant sums
 *
 * Problem 23
 *
 * Created by quisseh on 12/3/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0023_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0023_H

#include <iostream>
#include <vector>
#include <set>
#include <numeric>

class problem0023 {
public:
    problem0023() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 23;
    const unsigned long m_limit = 20161; /* Every integer greater than 20161 is the sum of two abundant numbers. */

    bool isAbundant(int num);
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0023_H
