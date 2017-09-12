/*
 * Non-abundant sums
 *
 * Problem 23
 *
 * Created by quisseh on 12/3/15.
 */

#include "problem0023.h"

/*
 * Find the [sum] of all divisors of
 * [num]. Return [true] if [sum] is
 * greater than [num] (meaning [num]
 * is abundant), otherwise return [false].
 */
bool problem0023::isAbundant(int num) {
    int limit = num / 2;
    int sum = 1;
    for (int i = 2; i <= limit; ++i) {
        if (num % i == 0) sum += i;
    }
    return sum > num;
}

/*
 * Loop through all numbers up to [m_limit],
 * which is the range where we can find numbers
 * that aren't sums of two abundant numbers.
 * If cursor [i] is abundant, add it to vector
 * [abundantNumbers]. Then loop over [abundantNumbers];
 * for each abundant number [j], add [j] to [i] and
 * store the sum in the set [abundantSums]. When done,
 * fill [range] with all numbers from 1 to [m_limit].
 * Using [set_difference], we will compare [range] to
 * [abundantSums] to find all numbers that aren't
 * abundant sums; store the result in [difference].
 * Then output the sum of all elements in [difference]
 * and return.
 */
void problem0023::run() {
    std::vector<int> abundantNumbers;
    std::set<int> abundantSums;
    for (int i = 1; i <= m_limit; ++i) {
        if (isAbundant(i)) {
            abundantNumbers.push_back(i);
            for (int j : abundantNumbers) {
                if ((i + j) > m_limit) break;
                abundantSums.insert(i + j);
            }
        }
    }
    std::vector<int> range(m_limit);
    std::iota(range.begin(), range.end(), 1);
    std::vector<int> difference;
    std::set_difference(range.begin(), range.end(), abundantSums.begin(), abundantSums.end(),
                        std::inserter(difference, difference.end()));
    std::cout << std::accumulate(difference.begin(), difference.end(), 0);
}
