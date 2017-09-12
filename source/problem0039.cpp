/*
 * Integer right triangles
 *
 * Problem 39
 *
 * Created by quisseh on 12/22/15.
 */

#include "problem0039.h"

/*
 * Loop through all possible triangle perimeter values
 * [p] from [m_min] to [m_max]. For each [p], loop through
 * every possible combination of [a] and [b]. For each
 * combination of [a] and [b], calculate [c], then determine
 * if the triangle we're describing is a right triangle.
 * If so, increment [solutions]. When you've covered all
 * combinations of [a] and [b] for the given [p], check if
 * the number of solutions for [p] is the highest number
 * of solutions found so far. If so, save [solutions] in
 * [topSolutions] and save [p] in [topPerimeter]. When done
 * checking all values of [p], output [topPerimeter] and
 * return.
 */
void problem0039::run() {
    int topPerimeter = 0;
    int topSolutions = 0;
    for (int p = m_min; p <= m_max; ++p) {
        int solutions = 0;
        int aLimit = p / 4;
        for (int a = 3; a <= aLimit; ++a) {
            int bLimit = (p - a) / 2;
            for (int b = a + 1; b <= bLimit; ++b) {
                int c = p - a - b;
                if ((a * a) + (b * b) == (c * c)) ++solutions;
            }
        }
        if (solutions > topSolutions) {
            topSolutions = solutions;
            topPerimeter = p;
        }
    }
    std::cout << topPerimeter;
}
