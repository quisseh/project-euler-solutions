/*
 * Project Euler utilities (aka "peu")
 *
 * Created by quisseh on 11/8/15.
 */

#include "peu.h"

/*
 * Trial division method. Test [num]
 * against all possible factors between
 * 2 and the square root of [num]. If
 * none divide evenly, [num] is prime.
 */
bool peu::isPrime(int num) {
    if (num < 2) return false;
    int limit = (int) sqrt(num);
    for (int i = 2; i <= limit; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

/*
 * Trial division method. Test [num]
 * against all possible factors between
 * 2 and the square root of [num]. If
 * any divide evenly, [num] is composite.
 */
bool peu::isComposite(int num) {
    if (num < 4) return false;
    int limit = (int) sqrt(num);
    for (int i = 2; i <= limit; ++i) {
        if (num % i == 0) return true;
    }
    return false;
}

/*
 * Implementation of the sieve of Eratosthenes. Used to
 * identify all prime/composite numbers up to/including
 * [n]. Initialize a vector [v] of booleans with a length
 * of [n]. Set the value at every index >= 2 to true.
 * Starting from 2, loop over all multiples of cursor [i];
 * for each multiple [j] of [i], set [v[j]] to false.
 * When done, increment [i] until a value of [v[i]] is
 * true. Repeat until the square of [i] is greater than [n].
 */
std::vector<bool> peu::sieveOfEratosthenes(unsigned long n) {
    std::vector<bool> v(n + 1);
    std::fill(v.begin() + 2, v.end(), true);
    for (int i = 2; i * i <= n;) {
        for (int j = i * i; j <= n; j = j + i) v[j] = false;
        do i += 1; while (v[i] == false);
    }
    return v;
}

/*
 * [bigNumber1] and [bigNumber2] are both whole
 * numbers of any size represented as strings.
 * First convert the last character of each string
 * into integers. Perform carry addition on the
 * integers, then add the [sum] as a string to
 * the front of [strSum]. Remove the last positions
 * of [bigNumber1] and [bigNumber2]. Repeat this
 * until one or both of the number strings is
 * empty. If [bigNumber1] or [bigNumber2] have a
 * remaining value, add it to the front of the
 * [strSum]. Add the remaining [carry] to the
 * front of [strSum] as well. Return [strSum].
 */
std::string peu::addBigNumbers(std::string bigNumber1, std::string bigNumber2) {
    std::string strSum;
    bool carry = 0;
    while (bigNumber1.length() > 0 && bigNumber2.length() > 0) {
        int sum = (bigNumber1.back() - '0') + (bigNumber2.back() - '0') + carry;
        if (sum > 9) {
            carry = 1;
            strSum = std::to_string(sum - 10) + strSum;
        } else {
            carry = 0;
            strSum = std::to_string(sum) + strSum;
        }
        bigNumber1.pop_back();
        bigNumber2.pop_back();
    }
    if (bigNumber1.length() > 0) strSum = addBigNumbers(bigNumber1, std::to_string(carry)) + strSum;
    else if (bigNumber2.length() > 0) strSum = addBigNumbers(bigNumber2, std::to_string(carry)) + strSum;
    else if (carry) strSum = std::to_string(carry) + strSum;
    return strSum;
}

/*
 * Classic choose algorithm to return number
 * of possible [k] combinations for a given
 * [n]. Equation is [n! / (k! * (n - k)!)].
 */
unsigned long long int peu::choose(unsigned long long int n, unsigned long long int k) {
    if (k == 0) return 1;
    return (n * choose(n - 1, k - 1)) / k;
}

/*
 * Splits a string [s] by a char [delimiter],
 * dumps result into a reference to an existing
 * vector [v].
 */
std::vector<std::string> &peu::split(const std::string &s, char delimiter, std::vector<std::string> &v) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delimiter)) {
        v.push_back(item);
    }
    return v;
}

/*
 * Recursive implementation of Euclidean algorithm
 * to find the greatest common denominator.
 */
int peu::gcd(int n, int d) {
    return d == 0 ? n : gcd(d, n % d);
}

/*
 * Simple factorial algorithm.
 */
long long peu::factorial(int n) {
    if (n == 0) return 1;
    for (auto i = n - 1; i > 0; --i) {
        n *= i;
    }
    return n;
}

/*
 * Determine if a string is a palindrome by checking
 * the first and last characters for equality, then
 * removing them and repeating the process until
 * there are fewer than 2 characters remaining.
 */
bool peu::isPalindrome(std::string str) {
    while (str.length() > 1) {
        if (str[0] != str[str.size() - 1]) return false;
        str = str.substr(1, str.size() - 2);
    }
    return true;
}

/*
 * Search [str] for all numbers from [rangeMin]
 * to [rangeMax]. If [str] contains all numbers,
 * return true. Otherwise, return false.
 */
bool peu::isPandigital(int rangeMin, int rangeMax, std::string str) {
    for (int i = rangeMin; i <= rangeMax; ++i) {
        if (str.find(char(i + '0')) == -1) return false;
    }
    return true;
}

/*
 * Returns the most commonly occurring char
 * within a vector of char, [chars].
 */
char peu::getMostCommonChar(std::vector<char> chars) {
    const int asciiSize = 256;
    std::vector<int> count(asciiSize);
    for (int i = 0; i < chars.size(); ++i) ++count[chars[i]];

    int max = -1;
    char result = 0;
    for (int i = 0; i < chars.size(); ++i) {
        if (max < count[chars[i]]) {
            max = count[chars[i]];
            result = chars[i];
        }
    }
    return result;
}
