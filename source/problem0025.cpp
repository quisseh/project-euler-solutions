/*
 * 1000-digit Fibonacci number
 *
 * Problem 25
 *
 * Created by quisseh on 12/4/15.
 */

#include "problem0025.h"

/*
 * [f1], [f2], and [f3] represent the first 3
 * numbers in the Fibonacci sequence. In a loop,
 * add [f1] and [f2] to calculate [f3], then
 * shift [f1] and [f2] to the next 2 numbers
 * behind [f3] in the sequence. Keep count of
 * the loop iterations in [i]. Continue this
 * loop until [f3] reaches [m_target] digits.
 * Output [i] when done and return.
 *
 * To see how [addBigNumbers] works, check the
 * definition in "peu.cpp".
 */
void problem0025::run() {
    std::string f1 = "1";
    std::string f2 = f1;
    std::string f3;
    int i = 2;
    while (f3.length() < m_target) {
        f3 = peu::addBigNumbers(f2, f1);
        f1 = f2;
        f2 = f3;
        ++i;
    }
    std::cout << i;
}
