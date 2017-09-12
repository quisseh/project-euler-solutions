/*
 * Largest product in a series
 *
 * Problem 8
 *
 * Created by quisseh on 11/6/15.
 */

#include "problem0008.h"

/*
 * Store the 1000-digit number in a string, [m_1000Digit].
 * Use nested loops; the outer loop moves cursor [i]
 * across [m_1000Digit], while the inner loop starts at [i]
 * and multiplies the next 13 numbers. If the resulting
 * [product] is higher than the last product saved, save
 * it in [lastProduct]. When complete, output [lastProduct]
 * and return.
 */
void problem0008::run() {
    int outerLimit = (int) m_1000Digit.length() - m_seriesSize;
    long lastProduct = 0;
    for (int i = 0; i < outerLimit; ++i) {
        long product = 1;
        int innerLimit = i + m_seriesSize;
        for (int j = i; j < innerLimit; ++j) {
            product *= (m_1000Digit[j] - '0'); /* Convert char to int, then multiply by [product]. */
        }
        if (product > lastProduct) lastProduct = product;
    }
    std::cout << lastProduct;
}
