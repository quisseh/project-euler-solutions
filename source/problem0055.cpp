/*
 * Lychrel numbers
 *
 * Problem 55
 *
 * Created by quisseh on 9/20/16.
 */

#include "problem0055.h"

/*
 * For up to 24 iterations: convert integer [n] to
 * a string and store in [str]. Reverse [str] and
 * store that in [rev]. Add [str] and [rev] together
 * (as integers) and store the result back in [str].
 * If [str] is ever found to be a palindrome, return
 * false. Otherwise, it is a Lychrel; return true.
 */
bool problem0055::isLychrel(int n) {
    std::string str = std::to_string(n), rev;
    for (int i = 1; i <= 24; ++i) {
        rev = str;
        std::reverse(rev.begin(), rev.end());
        str = std::to_string(strtoull(str.c_str(), nullptr, 10) + strtoull(rev.c_str(), nullptr, 10));
        if (peu::isPalindrome(str)) return false;
    }
    return true;
}

/*
 * Loop over integers 1 to 9999. Pass cursor [i] to
 * function [isLychrel]. If [i] is a Lychrel number,
 * increment counter [c]. When done, output [c].
 */
void problem0055::run() {
    int c = 0;
    for (int i = 1; i <= 9999; ++i) c += isLychrel(i);
    std::cout << c;
}
