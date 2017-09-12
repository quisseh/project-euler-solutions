/*
 * Amicable numbers
 *
 * Problem 21
 *
 * Created by quisseh on 11/21/15.
 */

#include "problem0021.h"

/*
 * Find the sum of all divisors [d] for each number
 * [i] under [m_limit], then store [d] in the
 * [divisorSums] array at position [i]. This links
 * the number with its associated divisor sum. If
 * we find that the value stored at position [d]
 * in [divisorSums] is equal to [i], but [d] and
 * [i] themselves are not equal, we have found
 * amicable numbers; add both [i] and [d] to
 * [amicableSum]. When we've covered all numbers
 * in the range, output [amicableSum] and return.
 */
void problem0021::run() {
    int divisorSums[m_limit];
    int amicableSum = 0;
    for (int i = 0, d = 0; i < m_limit; ++i, d = 0) {
        int divisorLimit = i / 2;
        for (int j = 1; j <= divisorLimit; ++j) {
            if (i % j == 0) d += j;
        }
        divisorSums[i] = d;
        if (d < m_limit && d != i && divisorSums[d] == i) {
            amicableSum += (d + i);
        }
    }
    std::cout << amicableSum;
}
