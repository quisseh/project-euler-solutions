/*
 * Counting Sundays
 *
 * Problem 19
 *
 * Created by quisseh on 11/20/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0019_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0019_H

#include <iostream>

class problem0019 {
public:
    problem0019() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 19;
    const int m_startYear = 1901;
    const int m_endYear = 2000;
    const int m_firstSunday = 6; /* First Sunday in 1901 was the 6th. */
    int m_daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0019_H
