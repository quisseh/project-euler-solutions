/*
 * Circular primes
 *
 * Problem 35
 *
 * Created by quisseh on 12/19/15.
 */

#include "problem0035.h"

/*
 * Search all odd numbers up to [m_max]. If the number
 * [i] is prime, rotate it and confirm that its rotation
 * is prime as well. Continue rotating until it returns
 * to its original form. If all rotations are prime,
 * we found a circular prime so increment [count] by 1.
 * When done, output [count] and return.
 */
void problem0035::run() {
    int count = 13; /* Problem description states there are 13 circular primes below 100. We begin our search at 101. */
    for (int i = 101; i <= m_max; i += 2) {
        if (!peu::isPrime(i)) continue;
        std::string origNum = std::to_string(i);
        std::string rotateNum = origNum;
        while (true) {
            std::rotate(rotateNum.begin(), rotateNum.begin() + 1, rotateNum.end());
            if (rotateNum == origNum) {
                ++count;
                break;
            }
            if (!peu::isPrime(std::stoi(rotateNum))) break;
        }
    }
    std::cout << count;
}
