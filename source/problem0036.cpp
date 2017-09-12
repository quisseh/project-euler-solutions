/*
 * Double-base palindromes
 *
 * Problem 36
 *
 * Created by quisseh on 12/20/15.
 */

#include "problem0036.h"

/*
 * Loop over all odd numbers, [i], from 1 to
 * [m_ceiling]. For each, check if the base 10
 * representation of [i] is a palindrome. If so,
 * convert [i] to binary, remove leading zeroes,
 * and check if the binary representation is also
 * a palindrome. If so, add [i] to [totalSum].
 * When done, output [totalSum] and return.
 */
void problem0036::run() {
    int totalSum = 0;
    for (int i = 1; i < m_ceiling; i += 2) {
        if (!peu::isPalindrome(std::to_string(i))) continue;
        std::string binary = std::bitset<20>((unsigned) i).to_string();
        binary.erase(0, binary.find_first_not_of('0'));
        if (peu::isPalindrome(binary)) totalSum += i;
    }
    std::cout << totalSum;
}
