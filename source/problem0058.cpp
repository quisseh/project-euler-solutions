/*
 * Spiral primes
 *
 * Problem 58
 *
 * Created by quisseh on 12/8/16.
 */

#include "problem0058.h"

/*
 * This solution was made based on a number of observations
 * about the number spiral: the distance between each diagonal
 * number, [n], increases by 2 for each subsequent ring; the
 * number limit, [l], for each ring (before we start the next
 * ring) starts with 9 and continues diagonally down and to the
 * right; the next [l] can always be calculated by this equation:
 * [((l - lPrev) + 8) + l], where [lPrev] is the [l] from the
 * previous ring.
 *
 * So, we loop around this spiral increasing [i], our diagonal
 * cursor, by [n], the distance between each diagonal. We store
 * each [i] in vector [diagonals]. If [i] is prime, increment
 * counter [primes] by 1. When [i] hits [l], we increase [n] and
 * [l] appropriately to account for the next ring. If the ratio
 * of [primes] to the total number of [diagonals] yields less
 * than 10%, output the number of rings, [n + 1], and return.
 */
void problem0058::run() {
    std::vector<int> diagonals;
    for (int i = 1, n = 2, l = 9, lPrev = 1, primes = 0;; i += n) {
        diagonals.push_back(i);
        if (peu::isPrime(i)) ++primes;
        if (i == l) {
            if ((double) primes / diagonals.size() < .1) {
                std::cout << n + 1;
                return;
            }
            n += 2;
            int lNext = ((l - lPrev) + 8) + l;
            lPrev = l;
            l = lNext;
        }
    }
}
