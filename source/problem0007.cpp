/*
 * 10001st prime
 *
 * Problem 7
 *
 * Created by quisseh on 11/5/15.
 */

#include "problem0007.h"

/*
 * We know 2 is the first prime, so start
 * [primeCount] at 1, then loop through all
 * odd numbers starting with 3. Check [i]
 * for primality each time around the loop.
 * If [i] is prime, increment [primeCount]
 * by 1. Once [primeCount] reaches [m_target]
 * output [i] and return.
 */
void problem0007::run() {
    int primeCount = 1;
    for (int i = 3;; i += 2) {
        if (peu::isPrime(i)) {
            primeCount += 1;
            if (primeCount == m_target) {
                std::cout << i;
                return;
            }
        }
    }
}
