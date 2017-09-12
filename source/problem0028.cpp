/*
 * Number spiral diagonals
 *
 * Problem 28
 *
 * Created by quisseh on 12/2/15.
 */

#include "problem0028.h"

/*
 * This solution was made based on a number of observations
 * about the number spiral: the distance between each diagonal
 * number, [n], increases by 2 for each subsequent ring; the
 * number limit, [l], for each ring (before we start the next
 * ring) starts with 9 and continues diagonally up and to the
 * right; the next [l] can always be calculated by this
 * equation: [((l - lPrevious) + 8) + l], where [lPrevious]
 * is the [l] from the previous ring.
 *
 * So, we loop around this spiral increasing [i], our diagonal
 * cursor, by [n], the distance between each diagonal. When
 * [i] hits [l], we increase [n] and [l] appropriately to
 * account for the next ring. With each pass around the loop,
 * we add [i] to [total]. Once [i] reaches [m_size], we've
 * traversed every diagonal in the spiral. Output [total] and
 * return.
 */
void problem0028::run() {
    int total = 0;
    for (int i = 1, n = 2, l = 9, lPrevious = 1; n <= m_size; i += n) {
        if (i == l) {
            n += 2;
            int lNext = ((l - lPrevious) + 8) + l;
            lPrevious = l;
            l = lNext;
        }
        total += i;
    }
    std::cout << total;
}
