/*
 * Factorial digit sum
 *
 * Problem 20
 *
 * Created by quisseh on 11/21/15.
 */

#include "problem0020.h"

/*
 * Start with [factorial] and [factor] set
 * equal to the string representation of
 * [m_target]. [i] represents the next number
 * in the factorial sequence. We simulate
 * multiplication by adding [factorial] to
 * [factor] [i] times. When done, set [factor]
 * equal to [factorial] and restart the loop
 * with [i] decremented. Repeat this until
 * [i] reaches 0 and the factorial is complete.
 * Then add the last digit of [factorial] to
 * [digitSum], and remove that digit from
 * [factorial]. Do this until [factorial] is
 * empty. Output the final [digitSum] and return.
 *
 * To see how [addBigNumbers] works, check the
 * definition in "peu.cpp".
 */
void problem0020::run() {
    std::string factorial = std::to_string(m_target);
    std::string factor = factorial;
    for (int i = m_target - 1; i > 0; --i) {
        for (int j = 1; j < i; ++j) {
            factorial = peu::addBigNumbers(factorial, factor);
        }
        factor = factorial;
    }
    int digitSum = 0;
    while (factorial.length() > 0) {
        digitSum += (factorial.back() - '0');
        factorial.pop_back();
    }
    std::cout << digitSum;
}
