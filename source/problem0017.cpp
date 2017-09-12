/*
 * Number letter counts
 *
 * Problem 17
 *
 * Created by quisseh on 11/19/15.
 */

#include "problem0017.h"

/*
 * Get length of the textual representation
 * of integers from 1 to 9.
 */
int problem0017::getOnesLength(int num) {
    switch (num) {
        case 1:
        case 2:
        case 6:
            return 3; /* one, two, six */
        case 4:
        case 5:
        case 9:
            return 4; /* four, five, nine */
        case 3:
        case 7:
        case 8:
            return 5; /* three, seven, eight */
        default:
            return 0;
    }
}

/*
 * Get length of the textual representation
 * of integers from 10 to 19.
 */
int problem0017::getTeensLength(int num) {
    switch (num) {
        case 10:
            return 3; /* ten */
        case 11:
        case 12:
            return 6; /* eleven, twelve */
        case 15:
        case 16:
            return 7; /* fifteen, sixteen */
        case 13:
        case 14:
        case 18:
        case 19:
            return 8; /* thirteen, fourteen, eighteen, nineteen */
        case 17:
            return 9; /* seventeen */
        default:
            return 0;
    }
}

/*
 * Get length of the textual representation
 * of integers from 20 to 99.
 */
int problem0017::getTensLength(int num) {
    int tens;
    switch (num / 10) {
        case 4:
        case 5:
        case 6:
            tens = 5; /* forty, fifty, sixty */
            break;
        case 2:
        case 3:
        case 8:
        case 9:
            tens = 6; /* twenty, thirty, eighty, ninety */
            break;
        case 7:
            tens = 7; /* seventy */
            break;
        default:
            tens = 0;
    }
    return tens + getOnesLength(num % 10);
}

/*
 * Get length of the textual representation
 * of integers 100 to 999.
 */
int problem0017::getHundredsLength(int num) {
    int hundreds = getOnesLength((num / 10) / 10) + 7; /* 7 for "hundred" */
    int tens = num % 100;
    if (tens == 0) return hundreds;
    hundreds += 3; /* 3 for "and" */
    if (tens < 10) hundreds += getOnesLength(tens);
    else if (tens < 20) hundreds += getTeensLength(tens);
    else hundreds += getTensLength(tens);
    return hundreds;
}

/*
 * Loop through all numbers from 1 to 1000,
 * passing each number into the appropriate
 * function (see above) to get the total
 * length of the textual representations
 * of all numbers within that range.
 */
void problem0017::run() {
    int numLetters = 0;
    int i;
    for (i = 1; i < 10; ++i) {
        numLetters += getOnesLength(i);
    }
    for (i = 10; i < 20; ++i) {
        numLetters += getTeensLength(i);
    }
    for (i = 20; i < 100; ++i) {
        numLetters += getTensLength(i);
    }
    for (i = 100; i < 1000; ++i) {
        numLetters += getHundredsLength(i);
    }
    numLetters += 11; /* 11 for "onethousand" */
    std::cout << numLetters;
}
