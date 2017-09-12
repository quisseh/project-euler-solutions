/*
 * Highly divisible triangular number
 *
 * Problem 12
 *
 * Created by quisseh on 11/9/15.
 */

#include "problem0012.h"

/*
 * For each triangle number, find all divisors
 * from 2 to the square root of [triangle],
 * [limit]. [divisors] starts at 2; factors of 1 and
 * [triangle] are implied. If a number [j] is
 * found to be a divisor, we increment [divisors]
 * by 2, because for every divisor up to [limit]
 * there is a corresponding divisor above [limit].
 * When [divisors] is found to be greater than
 * [m_target], output [triangle] and return.
 */
void problem0012::run() {
    unsigned long triangle = 0;
    for (int i = 1;; ++i) {
        triangle += i;
        int divisors = 2; /* We know 1 and [triangle] itself are divisors, so start [divisors] at 2. */
        int limit = (int) sqrt(triangle);
        for (int j = 2; j <= limit; ++j) {
            if (triangle % j == 0) divisors += 2; /* For every divisor up to [limit], there is another above [limit]. */
        }
        if (divisors > m_target) {
            std::cout << triangle;
            return;
        }
    }
}
