/*
 * Digit cancelling fractions
 *
 * Problem 33
 *
 * Created by quisseh on 12/19/15.
 */

#include "problem0033.h"

/*
 * Loop through every combination of numerator [n]
 * and denominator [d] from [m_min] to [m_max] where
 * [n] is always less than [d]. If the tenths place
 * of [n] is equal to the ones place of [d], and when
 * these two place values are removed the remaining
 * fraction's decimal value is equal to the original
 * fraction's decimal value, we have a match. For each
 * match, multiply the numerators together and the
 * denominators together; store these values in [nProduct]
 * and [dProduct]. When done, find the greatest common
 * divisor of the fraction [nProduct] / [dProduct].
 * Divide [dProduct] by this value to reduce, then
 * output the result and return.
 */
void problem0033::run() {
    int nProduct = 1;
    int dProduct = 1;
    for (int n = m_min; n <= m_max; ++n) {
        for (int d = n + 1; d <= m_max; ++d) {
            if (n % 10 == d / 10 && (double(n / 10) / (d % 10)) == (double(n) / d)) {
                nProduct *= n;
                dProduct *= d;
            }
        }
    }
    std::cout << dProduct / peu::gcd(nProduct, dProduct);
}
