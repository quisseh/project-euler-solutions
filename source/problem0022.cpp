/*
 * Names scores
 *
 * Problem 22
 *
 * Created by quisseh on 12/1/15.
 */

#include "problem0022.h"

/*
 * Read in the text file of names as a string,
 * [names]. Remove the unnecessary '"' character
 * from [names]. Create empty vector [namesList]
 * then call the [split] function to split [names]
 * by the ',' character to place each name in
 * a spot in [namesList]. Sort [namesList] in
 * alphabetical order using the standard [sort]
 * function. Loop over [namesList]; for each string
 * in [namesList], loop through each character,
 * calculate its position in the alphabet using
 * its ASCII code, and add it to [score]. Multiply
 * the sum [score] by the name's position in the
 * [namesList]. Add the final [score] to [totalScore].
 * Once every name in [namesList] has been covered,
 * output [totalScore] and return.
 *
 * To see how [split] works, check the definition
 * in "peu.cpp".
 */
void problem0022::run() {
    std::ifstream file("data/p022_names.txt");
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string names = buffer.str();
    names.erase(std::remove(names.begin(), names.end(), '"'), names.end());
    std::vector<std::string> namesList;
    peu::split(names, ',', namesList);
    std::sort(namesList.begin(), namesList.end());
    int totalScore = 0;
    for (int i = 0; i < namesList.size(); ++i) {
        int score = 0;
        for (char &c : namesList[i]) {
            score += ((c - 'A') + 1);
        }
        score *= (i + 1);
        totalScore += score;
    }
    std::cout << totalScore;
}
