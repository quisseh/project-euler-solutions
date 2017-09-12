/*
 * Consecutive prime sum
 *
 * Problem 50
 *
 * Created by quisseh on 1/9/16.
 */

#include "problem0050.h"

/*
 * Generate a list of all prime numbers below 1 million. [topStart]
 * is the highest prime we can start our consecutive prime search
 * from that still yields a competitive result (determined by testing
 * all starting points up to 1 million). We'll store our consecutive
 * prime count in [topCount] and our answer in [topPrime]. For each
 * prime [primes[j]] in [primes], [sum] up consecutive prime numbers
 * starting from position [k] in [primes] until [sum] is greater or
 * equal to our current prime number at position [j] in [primes]. If
 * the [sum] is equal to the current prime number and the [count] of
 * consecutive primes is greater than [topCount], save [count] in
 * [topCount] and the current prime in [topPrime]. Repeat this summing
 * process from all starting points [primes[k]] up to [topStart]. Once
 * we've checked all prime numbers [primes[j]] under 1 million, output
 * [topPrime] and return.
 */
void problem0050::run() {
    std::vector<int> primes{2};
    for (int i = 3; i <= 999999; i += 2) {
        if (peu::isPrime(i)) primes.push_back(i);
    }
    const int topStart = 31;
    int topCount = 0;
    int topPrime = 0;
    for (auto j = 0; j < primes.size(); ++j) {
        for (int k = 0, sum = 0; primes[k] <= topStart; ++k, sum = 0) {
            for (int l = k, count = 0;; ++l, ++count) {
                sum += primes[l];
                if (sum < primes[j]) continue;
                else {
                    if (sum == primes[j] && topCount < count) {
                        topCount = count;
                        topPrime = primes[j];
                    }
                    break;
                }
            }
        }
    }
    std::cout << topPrime;
}
