/*
 * Coin sums
 *
 * Problem 31
 *
 * Created by quisseh on 12/18/15.
 */

#include "problem0031.h"

/*
 * A recursive solution. We have functions representing the
 * 2 pound (200 pence), 1 pound (100 pence), 50 pence, 20 pence,
 * 10 pence, 5 pence, 2 pence, and 1 pence denominations. The functions
 * are linked such that each will pass its parameter to the function
 * representing the next lower denomination, and add the return
 * value of that function to its own return value. This linking
 * allows us to drill down to the lowest denomination and accumulate
 * each possible combination of denominations that result from
 * [m_target]. We kick off this chain by passing [m_target] to
 * [twoPound]. Output the return value and return.
 */
void problem0031::run() {
    std::cout << twoPound(m_target);
}
