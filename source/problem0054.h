/*
 * Poker hands
 *
 * Problem 54
 *
 * Created by quisseh on 9/13/16.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PROBLEM0054_H
#define PROJECT_EULER_SOLUTIONS_PROBLEM0054_H

#include <iostream>
#include <fstream>
#include <vector>

class problem0054 {
public:
    problem0054() {}

    int getProblemNumber() { return m_problemNumber; }

    void run();

private:
    const int m_problemNumber = 54;
    enum Rank {
        HighCard,
        OnePair,
        TwoPairs,
        ThreeOfAKind,
        Straight,
        Flush,
        FullHouse,
        FourOfAKind,
        StraightFlush,
        RoyalFlush
    };

    bool doesPlayer1Win(std::string game);

    int rankHand(std::vector<int> values, bool flush);

    bool breakTie(std::vector<int> p1Values, std::vector<int> p2Values, int rank);

    int getHighestValueGivenRepeats(std::vector<int> values, int repeats);
};


#endif //PROJECT_EULER_SOLUTIONS_PROBLEM0054_H
