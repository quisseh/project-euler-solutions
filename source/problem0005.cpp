/*
 * Smallest multiple
 *
 * Problem 5
 *
 * Created by quisseh on 11/4/15.
 */

#include "problem0005.h"

/*
 * Set [smallestMultiple] equal to the highest
 * divisor, [m_ceiling]. Loop over the range of
 * divisors from [m_floor] to [m_ceiling]. If
 * [smallestMultiple] cannot be evenly divided
 * by a number in that range, break out of the loop,
 * increment by 2, and try again. If [smallestMultiple]
 * can be evenly divided by all numbers in the range,
 * it is the smallest multiple, so return.
 */
void problem0005::run() {
    long smallestMultiple = m_ceiling;
    while (true) {
        for (int i = m_floor; i <= m_ceiling; ++i) {
            if (smallestMultiple % i != 0) {
                break;
            } else if (i == m_ceiling) {
                std::cout << smallestMultiple;
                return;
            }
        }
        smallestMultiple += 2;
    }
}
