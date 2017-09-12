/*
 * Multiples of 3 and 5
 *
 * Problem 1
 *
 * Created by quisseh on 11/1/15.
 */

#include "problem0001.h"

/*
 * Get the sum of all integers divisible by [div]
 * up to [m_target]. This is done by incrementing
 * [i] by [div], adding [i] to [sum], and repeating
 * this until [i] reaches [m_target].
 */
int problem0001::getSumDivisibleBy(int div) {
    int sum = 0;
    for (int i = div; i <= m_target; i += div) {
        sum += i;
    }
    return sum;
}

/*
 * Get the sum of all integers divisible by 3 and 5.
 * There are some collisions between integers divisible
 * by 3 and 5, so after adding together the sums for 3
 * and 5, subtract away the sum for 15.
 */
void problem0001::run() {
    int result = getSumDivisibleBy(3) + getSumDivisibleBy(5) - getSumDivisibleBy(15);
    std::cout << result;
}
