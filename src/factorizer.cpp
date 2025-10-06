#include <iostream>
#include <vector>
#include "factorizer.hpp"
#include <cassert>

std::vector<int> factorizer::prime_factors(int num) {
    std::vector<int> answer = {};

    if (num < 2)
        return {};

    while (num % 2 == 0) {
        num /= 2;
        answer.push_back(2);
    }

    for (int i = 3; i*i <= num; i+=2) {
        while (num % i == 0) {
            num /= i;
            answer.push_back(i);
        }
    }

    if (num > 2)
        answer.push_back(num);

    return answer;
}

