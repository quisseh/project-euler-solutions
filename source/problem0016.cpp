/*
 * Power digit sum
 *
 * Problem 16
 *
 * Created by quisseh on 11/18/15.
 */

#include "problem0016.h"

/*
 * First we raise [m_digit] to [m_power].
 * Repeatedly add [powerDigit] to itself,
 * starting with [m_digit] and going until
 * [i] reaches [m_power]. When done, repeatedly
 * add the last digit of [powerDigit] to
 * [digitSum], then remove that digit from
 * [powerDigit]. Do this until [powerDigit] is
 * empty. Output the final [digitSum] and return.
 *
 * To see how [addBigNumbers] works, check the
 * definition in "peu.cpp".
 */
void problem0016::run() {
    std::string powerDigit = m_digit;
    for (int i = 1; i < m_power; ++i) {
        powerDigit = peu::addBigNumbers(powerDigit, powerDigit);
    }
    int digitSum = 0;
    while (powerDigit.length() > 0) {
        digitSum += (powerDigit.back() - '0');
        powerDigit.pop_back();
    }
    std::cout << digitSum;
}
