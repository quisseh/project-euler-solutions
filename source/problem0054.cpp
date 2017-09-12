/*
 * Poker hands
 *
 * Problem 54
 *
 * Created by quisseh on 9/13/16.
 */

#include "problem0054.h"

/*
 * Get the highest integer value from vector [values] that
 * repeats [repeats] times.
 */
int problem0054::getHighestValueGivenRepeats(std::vector<int> values, int repeats) {
    std::vector<int> sorted;
    for (int i = 0; i < values.size(); ++i) {
        if (std::count(values.begin(), values.end(), values[i]) == repeats) sorted.push_back(values[i]);
    }
    std::sort(sorted.begin(), sorted.end());
    return sorted.back();
}

/*
 * Given the [rank] the players have tied on, compare [p1Values]
 * and [p2Values] to determine which player wins. For ranks with
 * no repeating values, we compare player 1's highest value to
 * player 2's. For the rest, we compare the highest values from
 * the largest set of repeating values in each player's hand
 * (using function [getHighestValueGivenRepeats]). If there is
 * still a tie, we continue down to the next largest set or jump
 * to highest single value. For example, in the case of a full
 * house, first compare the value of the three equal cards in each
 * player's deck; if they still tie, compare the value of the two
 * equal cards. Return true if player 1 has the higher value.
 */
bool problem0054::breakTie(std::vector<int> p1Values, std::vector<int> p2Values, int rank) {
    int p1 = 0, p2 = 0;
    switch (rank) {
        case Rank::StraightFlush:
        case Rank::Flush:
        case Rank::Straight:
        case Rank::HighCard:
            return p1Values[4] > p2Values[4];

        case Rank::FourOfAKind:
            p1 = getHighestValueGivenRepeats(p1Values, 4);
            p2 = getHighestValueGivenRepeats(p2Values, 4);
            if (p1 != p2) return p1 > p2;
            p1Values.erase(std::remove(p1Values.begin(), p1Values.end(), p1), p1Values.end());
            p2Values.erase(std::remove(p2Values.begin(), p2Values.end(), p2), p2Values.end());
            if (p1Values[0] != p2Values[0]) return p1Values[0] > p2Values[0];
            return false;

        case Rank::FullHouse:
            for (int i = 3; i >= 2; --i) {
                p1 = getHighestValueGivenRepeats(p1Values, i);
                p2 = getHighestValueGivenRepeats(p2Values, i);
                if (p1 != p2) return p1 > p2;
            }
            return false;

        case Rank::ThreeOfAKind:
            for (int i = 3; i >= 1; i -= 2) {
                p1 = getHighestValueGivenRepeats(p1Values, i);
                p2 = getHighestValueGivenRepeats(p2Values, i);
                if (p1 != p2) return p1 > p2;
            }
            return false;

        case Rank::TwoPairs:
            for (int i = 0; i <= 1; ++i) {
                p1 = getHighestValueGivenRepeats(p1Values, 2);
                p2 = getHighestValueGivenRepeats(p2Values, 2);
                if (p1 != p2) return p1 > p2;
                p1Values.erase(std::remove(p1Values.begin(), p1Values.end(), p1), p1Values.end());
                p2Values.erase(std::remove(p2Values.begin(), p2Values.end(), p2), p2Values.end());
            }
            if (p1Values[0] != p2Values[0]) return p1Values[0] > p2Values[0];
            return false;

        case Rank::OnePair:
            for (int i = 2; i >= 1; --i) {
                p1 = getHighestValueGivenRepeats(p1Values, i);
                p2 = getHighestValueGivenRepeats(p2Values, i);
                if (p1 != p2) return p1 > p2;
            }
            return false;

        default:
            return false;
    }
}

/*
 * [values] is a vector of integer card values sorted ascending
 * which represents a player's hand. Analyze the format of this
 * vector (repeating values, consecutive values, etc.) to determine
 * what rank the player's hand is. Whether or not the hand is a
 * flush is predetermined and sent in via the [flush] parameter.
 */
int problem0054::rankHand(std::vector<int> values, bool flush) {
    bool straight = false;
    for (int i = 1; i <= 4; ++i) {
        if (values[0] != values[i] - i) break;
        if (i == 4) straight = true;
    }
    if (values[0] == 8 && straight && flush)
        return Rank::RoyalFlush;

    if (straight && flush)
        return Rank::StraightFlush;

    if ((values[0] == values[1] && values[1] == values[2] && values[2] == values[3]) ||
        (values[1] == values[2] && values[2] == values[3] && values[3] == values[4]))
        return Rank::FourOfAKind;

    if (((values[0] == values[1] && values[1] == values[2]) && (values[3] == values[4])) ||
        ((values[0] == values[1]) && (values[2] == values[3] && values[3] == values[4])))
        return Rank::FullHouse;

    if (flush)
        return Rank::Flush;

    if (straight)
        return Rank::Straight;

    if ((values[0] == values[1] && values[1] == values[2]) ||
        (values[1] == values[2] && values[2] == values[3]) ||
        (values[2] == values[3] && values[3] == values[4]))
        return Rank::ThreeOfAKind;

    if (((values[0] == values[1]) && (values[2] == values[3])) ||
        ((values[0] == values[1]) && (values[3] == values[4])) ||
        ((values[1] == values[2]) && (values[3] == values[4])))
        return Rank::TwoPairs;

    if ((values[0] == values[1]) ||
        (values[1] == values[2]) ||
        (values[2] == values[3]) ||
        (values[3] == values[4]))
        return Rank::OnePair;

    return Rank::HighCard;
}

/*
 * Parse out each player's hand from string [game]; store
 * both in [hands]. Check for equal suit values in each
 * hand to determine if the hand is a [flush]. Using the
 * vector of values [order], parse out the values from
 * each hand and convert them to integer values. Store
 * each player's values in vector [values]. Sort the
 * integers in [values] in ascending order, then pass
 * into the [rankHands] function to determine the rank
 * for each player's hand. If the player 1 has a higher
 * rank, return true; otherwise, pass each player's values
 * and their rank to the [breakTie] function to examine/
 * compare the [values] more closely to break the tie.
 * Return the boolean result of [breakTie].
 */
bool problem0054::doesPlayer1Win(std::string game) {
    std::vector<char> order{'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    std::vector<std::string> hands{game.substr(0, 14), game.substr(15, 14)};
    std::vector<std::vector<int>> values(2);
    std::vector<int> players;
    for (int i = 0; i <= 1; ++i) {
        bool flush = (hands[i][1] == hands[i][4] == hands[i][7] == hands[i][10] == hands[i][13]);
        for (int j = 0; j <= 12; j += 3) {
            values[i].push_back(int(std::find(order.begin(), order.end(), hands[i][j]) - order.begin()));
        }
        std::sort(values[i].begin(), values[i].end());
        players.push_back(rankHand(values[i], flush));
    }
    if (players[0] != players[1]) return players[0] > players[1];
    return breakTie(values[0], values[1], players[0]);
}

/*
 * Parse each line [game] from the poker data file. Pass
 * to the [doesPlayer1Win] function, which returns true
 * if player 1 won the [game]. Keep track of player 1's
 * wins in [p1Wins]. Output [p1Wins] when done.
 */
void problem0054::run() {
    std::ifstream file("data/p054_poker.txt");
    int p1Wins = 0;
    for (std::string game; getline(file, game);) {
        if (doesPlayer1Win(game)) ++p1Wins;
    }
    std::cout << p1Wins;
}
