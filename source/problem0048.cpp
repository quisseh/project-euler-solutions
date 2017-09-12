/*
 * Self powers
 *
 * Problem 48
 *
 * Created by quisseh on 1/8/16.
 */

#include "problem0048.h"

/*
 * Start with [mod] at 10 billion. We will use this value
 * to break down [num] and [subNum] to their last 10 digits
 * so their value will always fit inside a long. Starting
 * from 1, simulate raising [i] to the [i] power by multiplying
 * [i] by itself [i] times and storing it in [subNum]. For
 * each round of multiplication, mod [subNum] by [mod] to reduce
 * it to a maximum of its 10 digits. When done with the
 * multiplication round, add [subNum] to [num] and mod [num]
 * by [mod] to reduce. Repeat this until [i] reaches 1000. Then
 * output [num] and return.
 */
void problem0048::run() {
    const long mod = 10000000000;
    long num = 0;
    for (int i = 1; i <= 1000; ++i) {
        long subNum = i;
        for (int j = 1; j < i; ++j) {
            subNum = (subNum * i) % mod;
        }
        num = (num + subNum) % mod;
    }
    std::cout << num;
}
