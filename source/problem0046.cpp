/*
 * Goldbach's other conjecture
 *
 * Problem 46
 *
 * Created by quisseh on 1/3/16.
 */

#include "problem0046.h"

/*
 * Programmatic representation of Goldbach's conjecture.
 * [num] is supposed to always equal [j + (2 * (k * k))],
 * where [j] is a prime number between 2 and ([num] - 2)
 * and [k] is any positive integer starting at 1. When [num]
 * proves his conjecture wrong, return false.
 */
bool problem0046::conjecture(int num) {
    for (int j = 2; j < (num - 1); j += (j % 2 == 0 ? 1 : 2)) {
        if (!peu::isPrime(j)) continue;
        for (int k = 1, r = 9; r <= num; ++k, r = (j + (2 * (k * k)))) {
            if (r == num) return true;
        }
    }
    return false;
}

/*
 * Start from the next odd composite number after the last
 * shown in the problem description. Pass every odd composite
 * number into Goldbach's conjecture. The first number that
 * causes [conjecture] to return false is our answer; output
 * [i] and return.
 */
void problem0046::run() {
    for (int i = 35;; i += 2) {
        if (!peu::isComposite(i)) continue;
        if (!conjecture(i)) {
            std::cout << i;
            return;
        }
    }
}
