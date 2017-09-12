/*
 * Lexicographic permutations
 *
 * Problem 24
 *
 * Created by quisseh on 12/4/15.
 */

#include "problem0024.h"

/*
 * Start with a string [m_digits] containing our
 * number sequence. Pass [m_digits] to the standard
 * library function [next_permutation] to get the
 * next lexicographic permutation for [m_digits]
 * (in place). Repeat this [m_target] times. Then
 * output [m_digits] and return.
 */
void problem0024::run() {
    for (int i = 1; i < m_target; ++i) {
        std::next_permutation(m_digits.begin(), m_digits.end());
    }
    std::cout << m_digits;
}
