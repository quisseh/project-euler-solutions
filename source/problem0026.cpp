/*
 * Reciprocal cycles
 *
 * Problem 26
 *
 * Created by quisseh on 12/5/15.
 */

#include "problem0026.h"

/*
 * If a given unit fraction [1/d] is capable of yielding a
 * cyclic number in its decimal fraction part, the length
 * of the recurring cycle will be [d-1]. In the example
 * given, we see that [1/7] yields a recurring cycle of
 * [142857], which is [7-1] digits long. Therefore, to find the
 * longest recurring cycle, we should start from the highest
 * value of [d] possible, [m_ceiling], and continue down. Safe
 * prime numbers tend to yield cyclic numbers in unit fractions,
 * so we will only accept values of [d] that are safe primes.
 *
 * In a loop, starting from [m_ceiling], check if cursor [d]
 * itself is prime and [(d - 1) / 2] is also prime (to prove
 * that [d] is a safe prime). The first [d] that meets this
 * criteria is our answer; output [d] and return.
 */
void problem0026::run() {
    for (int d = m_ceiling; d > 0; --d) {
        if (peu::isPrime(d) && peu::isPrime((d - 1) / 2)) {
            std::cout << d;
            break;
        }
    }
}
