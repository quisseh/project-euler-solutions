/*
 * Project Euler utilities (aka "peu")
 *
 * Created by quisseh on 11/8/15.
 */

#ifndef PROJECT_EULER_SOLUTIONS_PEU_H
#define PROJECT_EULER_SOLUTIONS_PEU_H

#include <iostream>
#include <math.h>
#include <vector>
#include <sstream>

namespace peu {
    bool isPrime(int num);

    bool isComposite(int num);

    std::vector<bool> sieveOfEratosthenes(unsigned long n);

    std::string addBigNumbers(std::string bigNumber1, std::string bigNumber2);

    unsigned long long choose(unsigned long long n, unsigned long long k);

    std::vector<std::string> &split(const std::string &s, char delimiter, std::vector<std::string> &v);

    int gcd(int n, int d);

    long long factorial(int n);

    bool isPalindrome(std::string str);

    bool isPandigital(int rangeMin, int rangeMax, std::string str);

    char getMostCommonChar(std::vector<char> chars);
};


#endif //PROJECT_EULER_SOLUTIONS_PEU_H
