/*
 * Truncatable primes
 *
 * Problem 37
 *
 * Created by quisseh on 12/20/15.
 */

#include "problem0037.h"

/*
 * Loop over all odd numbers, [i], between [m_min] and
 * [m_max]. If [i] is prime, truncate each digit from
 * left to right, checking each time if the resulting
 * number is also prime. If so, truncate each digit
 * from right to left, checking each time if the resulting
 * number is also prime. If every prime check returned
 * true, add [i] to [sum]. When done, output [sum] and
 * return.
 */
void problem0037::run() {
    int sum = 0;
    for (int i = m_min; i < m_max; i += 2) {
        if (!peu::isPrime(i)) continue;
        std::string numStr = std::to_string(i);
        auto strSize = numStr.size();
        for (int j = 1;; ++j) {
            if (!peu::isPrime(std::stoi(numStr.substr((unsigned) j, strSize - j)))) break;
            else if (j == strSize - 1) {
                for (int k = j;; --k) {
                    if (!peu::isPrime(std::stoi(numStr.substr(0, (unsigned) k)))) break;
                    if (k == 1) {
                        sum += i;
                        break;
                    }
                }
                break;
            }
        }
    }
    std::cout << sum;
}
