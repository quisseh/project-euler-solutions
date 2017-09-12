/*
 * Quadratic primes
 *
 * Problem 27
 *
 * Created by quisseh on 12/6/15.
 */

#include "problem0027.h"

/*
 * For the equation [n^2 + an + b]: loop through every
 * possible combination of [a] and [b] between [m_min]
 * and [m_max]; for each, count the number of consecutive
 * primes, [n], the equation returns. When the highest
 * value of [n] is found, save the [product] of [a] and
 * [b]. When done, output [product] and return.
 */
void problem0027::run() {
    int numPrimes = 0;
    int product = 0;
    for (int a = m_min; a <= m_max; ++a) {
        for (int b = m_min; b <= m_max; ++b) {
            for (int n = 0;; ++n) {
                if (!peu::isPrime((n * n) + (a * n) + b)) {
                    if (n > numPrimes) {
                        numPrimes = n;
                        product = a * b;
                    }
                    break;
                }
            }
        }
    }
    std::cout << product;
}
