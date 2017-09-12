/*
 * Lexicographic permutations
 *
 * Problem 24
 *
 * Created by quisseh on 12/4/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0024_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0024_H

#include <iostream>

class problem0024 {
public:
    problem0024() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 24;
    const int m_target = 1000000;
    std::string m_digits = "0123456789";
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0024_H
