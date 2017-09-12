/*
 * Longest Collatz sequence
 *
 * Problem 14
 *
 * Created by quisseh on 11/15/15.
 */

#include "problem0014.h"

/*
 * For each integer [i] from [m_ceiling] to
 * [m_floor], modify its copy [n] in a loop
 * until its value reaches [m_floor]. When
 * [n] is even, double it. When [n] is odd,
 * triple it and add 1. Keep count of how
 * many iterations we cover before [n] reaches
 * 1. Save the [i] that yielded the highest
 * [count] in [topNum]. Output [topNum] when
 * done.
 */
void problem0014::run() {
    int topCount = 0;
    int topNum = 0;
    for (int i = m_ceiling; i >= m_floor; --i) {
        long n = i;
        int count = 0;
        while (n != m_floor) {
            if (n % 2 == 0) n /= 2;
            else n = (3 * n) + 1;
            ++count;
        }
        if (count > topCount) {
            topCount = count;
            topNum = i;
        }
    }
    std::cout << topNum;
}
