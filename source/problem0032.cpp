/*
 * Pandigital products
 *
 * Problem 32
 *
 * Created by quisseh on 12/18/15.
 */

#include "problem0032.h"

/*
 * Loop through [i] and [j] from 1 up to [m_multipleMax].
 * Each time around, multiply [i] and [j] and store the
 * product in [k]. Convert [i], [j], and [k] into strings
 * and store their concatenation in [ijk]. If [ijk] is
 * [m_panMax] characters long and [isPandigital], save
 * [k] in the [products] set. When done, add up all values
 * stored in [products], output, and return.
 */
void problem0032::run() {
    std::unordered_set<int> products;
    for (int i = 1; i < m_multipleMax; ++i) {
        for (int j = 1; j < i; ++j) {
            int k = i * j;
            std::string ijk = std::to_string(i) + std::to_string(j) + std::to_string(k);
            if (ijk.length() != m_panMax) continue;
            if (peu::isPandigital(m_panMin, m_panMax, ijk)) products.insert(k);
        }
    }
    std::cout << std::accumulate(products.begin(), products.end(), 0);
}
