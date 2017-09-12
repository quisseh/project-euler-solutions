/*
 * Permuted multiples
 *
 * Problem 52
 *
 * Created by quisseh on 9/4/16.
 */

#include "problem0052.h"

/*
 * Convert cursor [i] to string [s1]. Loop cursor
 * [j] from 2 to 6. For each [j], multiply [i] and
 * [j] together; convert this to string [s2]. If
 * [s2] is a permutation of [s1], continue. If [j]
 * equals 6 at this point, we're done. Output [s1]
 * and return.
 */
void problem0052::run() {
    for (int i = 1;; ++i) {
        std::string s1 = std::to_string(i);
        for (int j = 2; j <= 6; ++j) {
            std::string s2 = std::to_string(i * j);
            if (!std::is_permutation(s1.begin(), s1.end(), s2.begin())) break;
            if (j < 6) continue;
            std::cout << s1;
            return;
        }
    }
}
