/*
 * Prime permutations
 *
 * Problem 49
 *
 * Created by quisseh on 1/9/16.
 */

#include "problem0049.h"

/*
 * Start at the next odd number after the first in the problem description.
 * For each 4 digit odd number, check if it's prime. If so, set [j] equal to
 * ([i] + 3330) and [k] equal to ([j] + 3330). If both [j] and [k] are prime
 * and permutations of [i], output [i], [j], [k] concatenated together and
 * return.
 */
void problem0049::run() {
    for (int i = 1489;; i += 2) {
        if (!peu::isPrime(i)) continue;
        std::string str = std::to_string(i);
        int j = i + 3330;
        int k = j + 3330;
        if (peu::isPrime(j) &&
            std::is_permutation(str.begin(), str.end(), std::to_string(j).begin()) &&
            peu::isPrime(k) &&
            std::is_permutation(str.begin(), str.end(), std::to_string(k).begin())) {
            std::cout << i << j << k;
            return;
        }
    }
}
