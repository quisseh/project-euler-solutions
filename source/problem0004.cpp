/*
 * Largest palindrome product
 *
 * Problem 4
 *
 * Created by quisseh on 11/3/15.
 */

#include "problem0004.h"

/*
 * Nested loops traverse the range of two 3 digit
 * numbers, starting from [m_ceiling] going down
 * to [m_floor]. Only unique combinations of these
 * two numbers are multiplied together. The [product]
 * is converted to a string and each position is
 * checked to determine whether or not the [product]
 * is a palindrome. If it is, and its value is higher
 * than the last palindrome saved in [topPalindrome],
 * save it. Repeat until the loop ends to determine
 * the largest palindrome.
 */
void problem0004::run() {
    int topPalindrome = 0;
    for (int i = m_ceiling; i > m_floor; --i) {
        for (int j = m_ceiling; j >= i; --j) {
            int product = i * j;
            if (product <= topPalindrome) break;
            std::string productString = std::to_string(product);
            if ((productString.length() == 6) && (productString[0] == productString[5]) &&
                (productString[1] == productString[4]) && (productString[2] == productString[3]) &&
                product > topPalindrome) {
                topPalindrome = product;
            }
        }
    }
    std::cout << topPalindrome;
}
