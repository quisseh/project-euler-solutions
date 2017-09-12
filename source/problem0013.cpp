/*
 * Large sum
 *
 * Problem 13
 *
 * Created by quisseh on 11/14/15.
 */

#include "problem0013.h"

/*
 * Iterate over every big number string [bigNum]
 * in [m_bigNumList]. With each pass, pass [sum]
 * and [bigNum] into the [addBigNumbers] function,
 * then set [sum] equal to the value returned by
 * [addBigNumbers]. When finished, output the first
 * 10 characters of [sum].
 *
 * To see how [addBigNumbers] works, check the
 * definition in "peu.cpp".
 */
void problem0013::run() {
    std::string sum;
    for (auto &bigNum : m_bigNumList) {
        sum = peu::addBigNumbers(sum, bigNum);
    }
    std::cout << sum.substr(0, 10);
}
