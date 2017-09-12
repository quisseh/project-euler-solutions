/*
 * Even Fibonacci numbers
 *
 * Problem 2
 *
 * Created by quisseh on 11/1/15.
 */

#include "problem0002.h"

/*
 * To get the [next] even number in the Fibonacci sequence,
 * multiply the [current] even number in the sequence by 4,
 * then add the [previous] even number in the sequence to
 * that product. Keep adding the [next] even number to the
 * [sum] of all even numbers until the predefined [m_target]
 * is reached.
 */
void problem0002::run() {
    int previous = 0;
    int current = 2;
    int next = 0;
    int sum = 0;
    while (current <= m_target) {
        sum += current;
        next = (current * 4) + previous;
        previous = current;
        current = next;
    }
    std::cout << sum;
}
