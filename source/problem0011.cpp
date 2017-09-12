/*
 * Largest product in a grid
 *
 * Problem 11
 *
 * Created by quisseh on 11/8/15.
 */

#include "problem0011.h"

/*
 * [m_grid] is 2-dimensional array representing
 * a 20x20 grid. Nested loops cover the rows and
 * columns. Each time around the loop we analyze
 * the current position of the cursor using [r][c]
 * and determine however many of the 8 possible
 * directions we can multiply 4 adjacent numbers
 * in. If that multiplication is possible without
 * going beyond the bounds of the grid, we compute
 * the product. If the product is higher than the
 * last highest product we computed, we save it in
 * [m_topProduct]. Once we've traversed the entire
 * grid, we output [m_topProduct].
 */
void problem0011::run() {
    for (int r = 0; r < 20; ++r) {
        for (int c = 0; c < 20; ++c) {
            if (r >= 3) { /* North */
                setTopProduct(m_grid[r][c] * m_grid[r - 1][c] * m_grid[r - 2][c] * m_grid[r - 3][c]);
                if (c >= 3) { /* Northwest */
                    setTopProduct(m_grid[r][c] * m_grid[r - 1][c - 1] * m_grid[r - 2][c - 2] * m_grid[r - 3][c - 3]);
                }
                if (c <= 16) { /* Northeast */
                    setTopProduct(m_grid[r][c] * m_grid[r - 1][c + 1] * m_grid[r - 2][c + 2] * m_grid[r - 3][c + 3]);
                }
            }
            if (r <= 16) { /* South */
                setTopProduct(m_grid[r][c] * m_grid[r + 1][c] * m_grid[r + 2][c] * m_grid[r + 3][c]);
                if (c >= 3) { /* Southwest */
                    setTopProduct(m_grid[r][c] * m_grid[r + 1][c - 1] * m_grid[r + 2][c - 2] * m_grid[r + 3][c - 3]);
                }
                if (c <= 16) { /* Southeast */
                    setTopProduct(m_grid[r][c] * m_grid[r + 1][c + 1] * m_grid[r + 2][c + 2] * m_grid[r + 3][c + 3]);
                }
            }
            if (c >= 3) { /* West */
                setTopProduct(m_grid[r][c] * m_grid[r][c - 1] * m_grid[r][c - 2] * m_grid[r][c - 3]);
            }
            if (c <= 16) { /* East */
                setTopProduct(m_grid[r][c] * m_grid[r][c + 1] * m_grid[r][c + 2] * m_grid[r][c + 3]);
            }
        }
    }
    std::cout << m_topProduct;
}
