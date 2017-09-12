/*
 * Pandigital prime
 *
 * Problem 41
 *
 * Created by quisseh on 12/31/15.
 */

#include "problem0041.h"

/*
 * Start from [m_max] and loop through every decreasing odd number.
 * If [i] is found to be pandigital and prime, output [i] and return.
 */
void problem0041::run() {
    for (int i = m_max;; i -= 2) {
        std::string str = std::to_string(i);
        if (peu::isPandigital(1, (int) str.size(), str) && peu::isPrime(i)) {
            std::cout << i;
            return;
        }
    }
}
