/*
 * Largest prime factor
 *
 * Problem 3
 *
 * Created by quisseh on 11/2/15.
 */

#include "problem0003.h"

/*
 * A number will have at most one prime factor
 * greater than its square root. So loop through
 * potential prime factors of [target], and
 * if one is found, reduce [target] by the current
 * [factor]. If [factor] exceeds the square root of
 * [target], then it is the largest prime factor.
 */
void problem0003::run() {
    long target = m_target;
    long factor = 2; /* Start with the smallest prime numbers. */
    long lastFactor = 1;
    long topFactor = (long) sqrt(target);
    while (target > 0 && factor <= topFactor) {
        while (target % factor == 0) { /* If [factor] is a factor of [target], */
            target /= factor; /* reduce [target] by [factor]. */
            lastFactor = factor;
            topFactor = (long) sqrt(target); /* Get the new square root of the updated [target]. */
        }
        factor += factor == 2 ? 1 : 2; /* Increment [factor] by 2 once it reaches 3 so only odd numbers are checked. */
    }
    std::cout << ((target == 1) ? lastFactor : target);
}
