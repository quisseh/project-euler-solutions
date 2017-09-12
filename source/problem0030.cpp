/*
 * Digit fifth powers
 *
 * Problem 30
 *
 * Created by quisseh on 12/14/15.
 */

#include "problem0030.h"

/*
 * We search all integers [i] between [m_min] and
 * [m_max]. For each, we raise each digit in
 * cursor [i] to a power of [m_power], then
 * add it to [sum]. After adding them all, if the
 * resulting [sum] is equal to cursor [i], we
 * found an integer that can be written as the sum
 * of [m_power] powers of its digits. Add every
 * such integer to [totalSum]. When done, output
 * [totalSum] and return.
 */
void problem0030::run() {
    int totalSum = 0;
    for (int i = m_min; i < m_max; ++i) {
        std::string str = std::to_string(i);
        int sum = 0;
        for (int j = 0; j < str.size(); ++j) {
            sum += pow(str[j] - '0', m_power);
        }
        if (sum == i) totalSum += sum;
    }
    std::cout << totalSum;
}
