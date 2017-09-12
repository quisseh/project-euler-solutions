/*
 * Distinct powers
 *
 * Problem 29
 *
 * Created by quisseh on 12/8/15.
 */

#include "problem0029.h"

/*
 * Calculate [a^b] for every combination of [a] and
 * [b] from [m_min] to [m_max]. Store each result in
 * a set, [terms], to eliminate duplicates. When done,
 * output the size of [terms].
 */
void problem0029::run() {
    std::unordered_set<double> terms;
    for (int a = m_min; a <= m_max; ++a) {
        for (int b = m_min; b <= m_max; ++b) {
            terms.insert(pow(a, b));
        }
    }
    std::cout << terms.size();
}
