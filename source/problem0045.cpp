/*
 * Triangular, pentagonal, and hexagonal
 *
 * Problem 45
 *
 * Created by quisseh on 1/3/16.
 */

#include "problem0045.h"

/*
 * Start from the index of the next hexagonal number after the one shown
 * in the problem description. Using the index [i], calculate the next
 * [hexagonal]. Pass [hexagonal] into the pentagonal equation to see if
 * it comes out even (no remainder). If it's even, we've found a number
 * that is hexagonal, pentagonal, and triangular. Output [hexagonal] and
 * return.
 *
 * (We don't need to check if our number is triangular because all hexagonal
 * numbers are triangular by default.)
 */
void problem0045::run() {
    for (int i = 144;; ++i) {
        long hexagonal = i * ((2 * i) - 1);
        auto pentagonal = (sqrt((24 * hexagonal) + 1) + 1) / 6;
        if (long(pentagonal) == pentagonal) {
            std::cout << hexagonal;
            return;
        }
    }
}
