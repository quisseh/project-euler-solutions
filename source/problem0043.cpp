/*
 * Sub-string divisibility
 *
 * Problem 43
 *
 * Created by quisseh on 1/1/16.
 */

#include "problem0043.h"

/*
 * Start [num] at the smallest 0 to 9 pandigital number.
 * For each increasing lexicographic permutation, split
 * [num] into 3-digit sub strings and check if the integer
 * representation of those sub strings are divisible by
 * the divisors specified in the problem description. If
 * all criteria is met, add [num] to [sum]. Once we've
 * covered all 0 to 9 pandigital numbers, output [sum]
 * and return.
 */
void problem0043::run() {
    std::string num = "1023456789";
    std::string sum;
    do {
        if (std::stoi(num.substr(1, 3)) % 2 == 0 &&
            std::stoi(num.substr(2, 3)) % 3 == 0 &&
            std::stoi(num.substr(3, 3)) % 5 == 0 &&
            std::stoi(num.substr(4, 3)) % 7 == 0 &&
            std::stoi(num.substr(5, 3)) % 11 == 0 &&
            std::stoi(num.substr(6, 3)) % 13 == 0 &&
            std::stoi(num.substr(7, 3)) % 17 == 0) {
            sum = peu::addBigNumbers(sum, num);
        }
    } while (std::next_permutation(num.begin(), num.end()));
    std::cout << sum;
}
