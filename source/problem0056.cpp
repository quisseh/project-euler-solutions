/*
 * Powerful digit sum
 *
 * Problem 56
 *
 * Created by quisseh on 9/22/16.
 */

#include "problem0056.h"

/*
 * Count back from 99, assuming the maximum digital sum
 * will occur within the first 5 iterations of [a] and [b].
 * Raise [a] to [b] using big number addition using strings.
 * For each resulting number, add each digit of the number
 * together to get [tmpSum]. Keep track of the last highest
 * sum in [digitSum]. When done, output [digitSum].
 */
void problem0056::run() {
    int digitSum = 0;
    for (int a = 99; a >= 95; --a) {
        for (int b = 99; b >= 95; --b) {
            std::string powerDigit = std::to_string(a);
            std::string tmpDigit = powerDigit;
            for (int i = 1; i < b; ++i) {
                for (int j = 1; j < a; ++j) {
                    powerDigit = peu::addBigNumbers(powerDigit, tmpDigit);
                }
                tmpDigit = powerDigit;
            }
            int tmpSum = 0;
            while (powerDigit.length() > 0) {
                tmpSum += (powerDigit.back() - '0');
                powerDigit.pop_back();
            }
            if (tmpSum > digitSum) digitSum = tmpSum;
        }
    }
    std::cout << digitSum;
}
