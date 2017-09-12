/*
 * Combinatoric selections
 *
 * Problem 53
 *
 * Created by quisseh on 9/4/16.
 */

#include "problem0053.h"

/*
 * Start cursor [n] at 23 (per the problem description).
 * Loop [n] up to 100. For each [n], increment [k] by 1
 * up to [n]. Pass [n] and [k] into a choose function.
 * Check the value returned by the choose; if it exceeds
 * 1000000, increment [count] by 1. Once every combination
 * of [n] and [k] has been tested, output [count] and return.
 */
void problem0053::run() {
    int count = 0;
    for (int n = 23; n <= 100; ++n) {
        for (int k = 1; k <= n; ++k) {
            if (peu::choose((unsigned) n, (unsigned) k) > 1000000) ++count;
        }
    }
    std::cout << count;
}
