/*
 * Champernowne's constant
 *
 * Problem 40
 *
 * Created by quisseh on 12/26/15.
 */

#include "problem0040.h"

/*
 * Build a string of consecutive [integers], starting from
 * 0 and incremented by 1, until the size of the string
 * [integers] reaches [m_ceiling]. Then we loop through
 * [integers] using [j], starting from 1 and continuing
 * in multiples of 10 until [j] reaches [m_ceiling]. For
 * each pass, we multiply [product] by the integer found
 * at position [j] within [integers]. When done, output
 * [product] and return.
 */
void problem0040::run() {
    std::string integers;
    for (int i = 0; integers.size() <= m_ceiling; ++i) {
        integers += std::to_string(i);
    }
    int product = 1;
    for (int j = 1; j <= m_ceiling; j *= 10) {
        product *= (integers[j] - '0');
    }
    std::cout << product;
}
