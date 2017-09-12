/*
 * Counting Sundays
 *
 * Problem 19
 *
 * Created by quisseh on 11/20/15.
 */

#include "problem0019.h"

/*
 * We start on the first Sunday in [m_startYear].
 * In increments of 7, we loop through every
 * Sunday in every month in every year between
 * [m_startYear] and [m_endYear]. If our day
 * cursor [d] falls on day 1 of the month, increment
 * [sundays]. If [d] exceeds the total number of
 * days for the current month, store the difference
 * in [carry], then set [d] equal to [carry] when
 * we begin traversing the next month to position
 * [d] on the next possible Sunday. When all
 * possible Sundays have been traversed, output
 * [sundays] and return.
 */
void problem0019::run() {
    int carry = m_firstSunday;
    int sundays = 0;
    for (int y = m_startYear; y <= m_endYear; ++y) {
        m_daysPerMonth[1] = (y % 4 == 0) ? 29 : 28; /* Handle leap year. */
        for (int m = 0, d = 0; m < 12; ++m) {
            for (d = carry; d < m_daysPerMonth[m]; d += 7) {
                if (d == 1) ++sundays;
            }
            carry = d - m_daysPerMonth[m];
        }
    }
    std::cout << sundays;
}
