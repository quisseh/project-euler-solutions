/*
 * Prime pair sets
 *
 * Problem 60
 *
 * Created by quisseh on 4/17/17.
 */

#include "problem0060.h"

/*
 * Return integer concatenation of integers
 * [x] and [y].
 */
int problem0060::concat(int x, int y) {
    int p = 1;
    while (p <= y) p *= 10;
    return (x * p) + y;
}

/*
 * If all prime numbers in [primes] can be
 * concatenated with prime number [n] to form
 * other prime numbers, return true.
 */
bool problem0060::isPrimePair(std::vector<int> &primes, int n) {
    for (int p : primes) {
        if (!peu::isPrime(concat(n, p)) || !peu::isPrime(concat(p, n))) return false;
    }
    return true;
}

/*
 * Gets the lowest set of [n] prime pairs by
 * filling up [primes] with prime numbers that
 * can be concatenated with each other to form
 * other prime numbers. If [n] prime numbers are
 * found that can all be prime pairs with each
 * other, return.
 */
bool problem0060::getLowestPrimePairSet(std::vector<int> &primes, int n, int min) {
    if (n == 0) return true;
    const int max = 10000;
    for (int i = min; i < max; ++i) {
        if (!(peu::isPrime(i) && isPrimePair(primes, i))) continue;
        primes.push_back(i);
        if (getLowestPrimePairSet(primes, n - 1, i + 1)) return true;
        primes.pop_back();
    }
    return false;
}

/*
 * Get the lowest set of 5 prime pairs
 * and output the sum.
 */
void problem0060::run() {
    std::vector<int> primes;
    const int numPrimes = 5;
    getLowestPrimePairSet(primes, numPrimes, 0);

    int result = std::accumulate(primes.begin(), primes.end(), 0);
    std::cout << result;
}
