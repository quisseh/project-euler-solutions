/*
 * Sum square difference
 *
 * Problem 6
 *
 * Created by quisseh on 11/4/15.
 */

#include "problem0006.h"

/*
 * From 1 to [m_ceiling], compute the sum
 * of the squares of [i], and the square
 * of the sum of [i]. Output the difference
 * of these two values.
 */
void problem0006::run() {
    long sumOfSquares = 0;
    long squareOfSum = 0;
    for (int i = 1; i <= m_ceiling; ++i) {
        sumOfSquares += (i * i);
        squareOfSum += i;
        if (i == m_ceiling) {
            squareOfSum *= squareOfSum;
        }
    }
    std::cout << (squareOfSum - sumOfSquares);
}
