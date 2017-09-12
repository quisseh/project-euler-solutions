/*
 * Pandigital multiples
 *
 * Problem 38
 *
 * Created by quisseh on 12/20/15.
 */

#include "problem0038.h"

/*
 * Loop over all numbers [i] from [m_min] to
 * [m_max]. Then loop over all numbers [j] from
 * [m_panMin] to [m_panMax]. Multiply [i] and [j]
 * together, then convert the product to a string
 * and add it to string [str]. Continue around
 * the loop, adding more products to [str]. If
 * [str] gets larger than [m_panMax], break out
 * and try the next [i]. If [str] size is equal
 * to [m_panMax], check if [str] is pandigital
 * and of higher lexicographical order than the
 * last pandigital we saved (in [topPandigital]),
 * store it in [topPandigital]. When done, output
 * [topPandigital] and return.
 */
void problem0038::run() {
    std::string topPandigital;
    for (int i = m_min; i < m_max; ++i) {
        std::string str;
        for (int j = m_panMin; j <= m_panMax; ++j) {
            str += std::to_string(i * j);
            if (str.size() < m_panMax) continue;
            else if (str.size() > m_panMax) break;
            else if (peu::isPandigital(m_panMin, m_panMax, str) && str > topPandigital) topPandigital = str;
        }
    }
    std::cout << topPandigital;
}
