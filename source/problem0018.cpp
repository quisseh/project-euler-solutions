/*
 * Maximum path sum I
 *
 * Problem 18
 *
 * Created by quisseh on 11/20/15.
 */

#include "problem0018.h"

/*
 * We loop over the triangle starting from
 * the bottom-left. Add the current value
 * of the cursor to the value above it, store
 * it in [current]. Add the value to the right
 * of the cursor to the same value above,
 * store it in [next]. Determine which is larger,
 * [current] or [next], and set the value above
 * equal to it. Repeat until you reach the end
 * of the row, then start again from the next
 * row above. The maximum path sum will ultimately
 * bubble up to the top position of the triangle.
 * Output the sum and return.
 */
void problem0018::run() {
    for (int r = m_limit; r > 0; --r) {
        int rUp = r - 1;
        for (int c = 0; c <= m_limit; ++c) {
            int cRight = c + 1;
            if (c < m_triangle[rUp].size()) {
                int current = m_triangle[r][c] + m_triangle[rUp][c];
                int next = m_triangle[r][cRight] + m_triangle[rUp][c];
                m_triangle[rUp][c] = std::max(current, next);
            }
        }
    }
    std::cout << m_triangle[0][0];
}
