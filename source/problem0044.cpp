/*
 * Pentagon numbers
 *
 * Problem 44
 *
 * Created by quisseh on 1/1/16.
 */

#include "problem0044.h"

/*
 * Generate [m_max] pentagonal numbers. Store them in the vector [pentagonals].
 * Then loop over every combination of [j] and [k] pentagonal numbers. For each,
 * check if both the sum and difference of [j] and [k] are also pentagonal
 * numbers. The first combination that meets this criteria is our answer; output
 * the difference between [j] and [k] and return.
 */
void problem0044::run() {
    std::vector<int> pentagonals;
    for (int i = 1; i <= m_max; ++i) {
        pentagonals.push_back(i * ((3 * i) - 1) / 2);
    }
    for (int j = 0; j < m_max; ++j) {
        for (int k = j; k < m_max; ++k) {
            auto sum = (sqrt((24 * (pentagonals[k] + pentagonals[j])) + 1) + 1) / 6;
            auto difference = (sqrt((24 * (pentagonals[k] - pentagonals[j])) + 1) + 1) / 6;
            if (int(sum) == sum && int(difference) == difference) {
                std::cout << pentagonals[k] - pentagonals[j];
                return;
            }
        }
    }
}
