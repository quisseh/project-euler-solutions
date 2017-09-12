/*
 * Summation of primes
 *
 * Problem 10
 *
 * Created by quisseh on 11/8/15.
 */

#include "problem0010.h"

/*
 * We know 2 is the first prime, so start
 * [sum] at 1, then loop through all odd
 * numbers starting with 3. Check [i]
 * for primality each time around the loop.
 * If [i] is prime, add [i] to [sum].
 * Once [i] reaches [m_ceiling] output
 * [sum] and return.
 */
void problem0010::run() {
    long sum = 2;
    for (int i = 3; i < m_ceiling; i += 2) {
        if (peu::isPrime(i)) sum += i;
    }
    std::cout << sum;
}
