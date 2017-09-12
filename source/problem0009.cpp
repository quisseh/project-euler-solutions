/*
 * Special Pythagorean triplet
 *
 * Problem 9
 *
 * Created by quisseh on 11/8/15.
 */

#include "problem0009.h"

/*
 * Simple but slow approach. Start [a] at 3,
 * the lowest possible value. [b] will always
 * start at [a] + 1. Plug [a] and [b] into the
 * Pythagorean equation and solve for [c]. If
 * [c] is a whole number, compute sum of [a],
 * [b], and [c]. If the sum is greater than
 * [m_target], break out to the top of the outer
 * loop to increment [a] and start over. If the
 * sum is less than [m_target], go to the top of
 * the inner loop to increment [b] and start over.
 * If the sum is equal to [m_target], compute
 * the product of [a], [b], and [c], then return.
 */
void problem0009::run() {
    for (int a = 3;; ++a) {
        for (int b = a + 1;; ++b) {
            double c = sqrt((a * a) + (b * b));
            if (floor(c) != c) continue; /* If [c] is not a whole number, start over. */
            int sum = a + b + (int) c;
            if (sum > m_target) break; /* If true, then we've gone too far. */
            if (sum != m_target) continue;
            std::cout << (a * b * (int) c);
            return;
        }
    }
}
