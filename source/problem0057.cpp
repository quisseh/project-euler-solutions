/*
 * Square root convergents
 *
 * Problem 57
 *
 * Created by quisseh on 12/2/16.
 */

#include "problem0057.h"

/*
 * Based on the observation that the next numerator
 * in the sequence will follow [num]+([den]*2) and
 * the next denominator in the sequence will follow
 * [num]+[den]. Run this sequence 1000 times, starting
 * at 3/2. For each [num] and [den], check if [num]
 * has more digits than [den]; if so, increment
 * [count]. When done, output [count].
 */
void problem0057::run() {
    int count = 0;
    std::string num = "3", den = "2";
    for (int i = 1; i < 1000; ++i) {
        auto prevNum = num;
        auto prevDen = den;
        num = peu::addBigNumbers(prevNum, peu::addBigNumbers(prevDen, prevDen));
        den = peu::addBigNumbers(prevNum, prevDen);
        if (num.length() > den.length()) ++count;
    }
    std::cout << count;
}
