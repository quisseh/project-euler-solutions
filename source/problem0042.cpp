/*
 * Coded triangle numbers
 *
 * Problem 42
 *
 * Created by quisseh on 1/1/16.
 */

#include "problem0042.h"

/*
 * Read in the text file of words as a string, split it by the given
 * delimiter, and dump it in vector [wordsList]. Then calculate the
 * first 25 triangle numbers; store them in [triangleNumbers]. Now
 * loop over all words in [wordsList]. For each word, loop over each
 * character, add up the alphabetical position of each character, and
 * store that in [value]. If [value] is found in [triangleNumbers],
 * we found a triangle word, so increment [count] by 1. Once we've
 * checked all words in [wordsList], output [count] and return.
 */
void problem0042::run() {
    std::ifstream file("data/p042_words.txt");
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string words = buffer.str();
    words.erase(std::remove(words.begin(), words.end(), '"'), words.end());
    std::vector<std::string> wordsList;
    peu::split(words, ',', wordsList);

    std::vector<int> triangleNumbers;
    for (int i = 1; i <= 25; ++i) {
        triangleNumbers.push_back(int(.5 * i * (i + 1)));
    }

    int count = 0;
    for (int j = 0; j < wordsList.size(); ++j) {
        int value = 0;
        for (char c : wordsList[j]) {
            value += ((c - 'A') + 1);
        }
        if (std::find(triangleNumbers.begin(), triangleNumbers.end(), value) != triangleNumbers.end()) ++count;
    }

    std::cout << count;
}
