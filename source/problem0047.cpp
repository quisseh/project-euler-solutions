/*
 * Distinct primes factors
 *
 * Problem 47
 *
 * Created by quisseh on 1/3/16.
 */

#include "problem0047.h"

/*
 * Count all distinct prime factors of [num] by checking
 * all numbers from 2 to ([num] / 2).
 */
int problem0047::numDistinctPrimeFactors(int num) {
    int limit = num / 2;
    int count = num % 2 == 0;
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0 && peu::isPrime(i)) ++count;
    }
    return count;
}

/*
 * Start cursor [i] at 210, the first number to be the product
 * of 4 distinct prime factors (2, 3, 5, 7). For each [i], check
 * if it has 4 distinct prime factors. If it does, check if ([i] - 1)
 * also had 4 distinct prime factors by seeing if its equal to [last].
 * If so, increment [count] by 1; if not, restart [count] at 1. Store
 * [i] in [last] so we can check it the next time around the loop.
 * Once [count] reaches 4, output ([i] - 3) - the first number in the
 * consecutive number sequence - and return.
 */
void problem0047::run() {
    for (int i = 210, last = 0, count = 0;; ++i) {
        if (numDistinctPrimeFactors(i) == 4) {
            count = last == i - 1 ? count + 1 : 1;
            if (count == 4) {
                std::cout << i - 3;
                return;
            }
            last = i;
        }
    }
}
