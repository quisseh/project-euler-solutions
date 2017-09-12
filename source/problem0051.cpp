/*
 * Prime digit replacements
 *
 * Problem 51
 *
 * Created by quisseh on 9/1/16.
 */

#include "problem0051.h"

/*
 * Assumptions: the solution will be a 6-digit integer and
 * 3 digits will need to be replaced to find an 8-prime family.
 * Start by generating list of primes using the sieve of
 * Eratosthenes. Loop through all 6-digit integers using cursor
 * [i]. If [i] is prime, convert [i] to string [s] for manipulation.
 * For each character (digit) in [s], check to see if it occurs
 * 3 times. If it does, try replacing those 3 digits with all of
 * the other digits from 1 to 9. Check each resulting number to see
 * if it is prime. Keep track of the smallest prime in the family.
 * If 8 primes are found, return the smallest.
 */
void problem0051::run() {
    auto v = peu::sieveOfEratosthenes(999999);
    for (int i = 100000; i <= 999999; ++i) {
        if (!v[i]) continue;
        auto s = std::to_string(i);
        for (char c : s) {
            auto tmp = s;
            tmp.erase(std::remove(tmp.begin(), tmp.end(), c), tmp.end());
            if (tmp.length() != s.length() - 3) continue;
            for (int j = 1, count = 1, smallestPrime = i; j <= 9; ++j) {
                if (j + '0' == c) continue;
                tmp = s;
                std::replace(tmp.begin(), tmp.end(), c, char(j + '0'));
                int num = std::stoi(tmp);
                if (!v[num]) continue;
                if (num < smallestPrime) smallestPrime = num;
                if (++count != 8) continue;
                std::cout << smallestPrime;
                return;
            }
        }
    }
}
