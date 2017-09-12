/*
 * Digit factorials
 *
 * Problem 34
 *
 * Created by quisseh on 12/19/15.
 */

#include "problem0034.h"

/*
 * Loop over all numbers from [m_min] to [m_max].
 * For each [i], add up the factorial of each of its
 * digits, and compare that value to [i]. If they are
 * equal, add it to [totalSum]. When done, output
 * [totalSum] and return.
 */
void problem0034::run() {
    int totalSum = 0;
    for (int i = m_min; i < m_max; ++i) {
        std::string numStr = std::to_string(i);
        int digitSum = 0;
        for (int j = 0; j < numStr.size(); ++j) {
            digitSum += peu::factorial(numStr[j] - '0');
        }
        if (i == digitSum) totalSum += digitSum;
    }
    std::cout << totalSum;
}
