/*
 * Lattice paths
 *
 * Problem 15
 *
 * Created by quisseh on 11/16/15.
 */

#include "problem0015.h"

/*
 * [m_x] and [m_y] represent the total size
 * of the grid in question. We solve for the
 * total number of paths from the top-left
 * corner to the bottom-right corner. Since
 * the number of moves going right, [m_x], and
 * the number of moves going down, [m_y], is
 * the same for all paths, this can be solved
 * with the following combination equation:
 * [n! / (k! * (n - k)!)]. [n] will be the sum
 * of [m_x] and [m_y], and [k] will be [m_x].
 *
 * To see how [choose] works, check the
 * definition in "peu.cpp".
 */
void problem0015::run() {
    std::cout << peu::choose((m_x + m_y), m_x);
}
