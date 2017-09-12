/*
 * Coin sums
 *
 * Problem 31
 *
 * Created by quisseh on 12/18/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0031_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0031_H

#include <iostream>

class problem0031 {
public:
    problem0031() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 31;
    const int m_target = 200;

    inline int twoPence(int p) { return p >= 0 ? twoPence(p - 2) + 1 : 0; } /* Adding 1 accounts for the 1 pence. */
    inline int fivePence(int p) { return p >= 0 ? fivePence(p - 5) + twoPence(p) : 0; }

    inline int tenPence(int p) { return p >= 0 ? tenPence(p - 10) + fivePence(p) : 0; }

    inline int twentyPence(int p) { return p >= 0 ? twentyPence(p - 20) + tenPence(p) : 0; }

    inline int fiftyPence(int p) { return p >= 0 ? fiftyPence(p - 50) + twentyPence(p) : 0; }

    inline int onePound(int p) { return p >= 0 ? onePound(p - 100) + fiftyPence(p) : 0; }

    inline int twoPound(int p) { return p >= 0 ? twoPound(p - 200) + onePound(p) : 0; }
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0031_H
