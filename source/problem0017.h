/*
 * Number letter counts
 *
 * Problem 17
 *
 * Created by quisseh on 11/19/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0017_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0017_H

#include <iostream>

class problem0017 {
public:
    problem0017() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    int getOnesLength(int num);

    int getTeensLength(int num);

    int getTensLength(int num);

    int getHundredsLength(int num);

    const int m_problemNumber = 17;
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0017_H
