/*
 * XOR decryption
 *
 * Problem 59
 *
 * Created by quisseh on 4/11/17.
 */

#include "problem0059.h"

/*
 * Read the file into a vector of char, [cipher].
 * Split [cipher] into three vectors, [split].
 * Use frequency analysis to decrypt [split].
 * Merge the decrypted text, [decrypt], into [merge].
 * Output the sum of the ASCII values in the merged text.
 */
void problem0059::run() {
    std::ifstream file("data/p059_cipher.txt");
    std::vector<char> cipher;
    for (std::string str; std::getline(file, str, ',');) {
        cipher.push_back(char(stoi(str)));
    }

    const int keySize = 3;
    std::vector<char> split[keySize];
    for (int i = 0, j = 0; i < cipher.size(); ++i, j = (j + 1) % keySize) {
        split[j].push_back(cipher[i]);
    }

    std::vector<char> decrypt[keySize];
    for (int i = 0; i < keySize; ++i) {
        char key = (peu::getMostCommonChar(split[i]) ^ char(32));
        for (int j = 0; j < split[i].size(); ++j) {
            decrypt[i].push_back(split[i][j] ^ key);
        }
    }

    std::vector<char> merge(cipher.size());
    for (int i = 0, j = 0, k = 0; i < merge.size(); ++i) {
        merge[i] = decrypt[j][k];
        j = (j + 1) % keySize;
        if (j == 0) ++k;
    }

    int result = std::accumulate(merge.begin(), merge.end(), 0);
    std::cout << result;
}
