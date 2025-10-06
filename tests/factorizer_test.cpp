#include <catch2/catch_test_macros.hpp>
#include "factorizer.hpp"
#include <vector>

TEST_CASE("Prime factorization of 10") {
    factorizer f;
    REQUIRE(f.prime_factors(10) == std::vector<int>{2, 5});
}

TEST_CASE("Prime factorization of 24") {
    factorizer f;
    REQUIRE(f.prime_factors(24) == std::vector<int>{2, 2, 2, 3});
}

TEST_CASE("Prime factorization of 1") {
    factorizer f;
    REQUIRE(f.prime_factors(1) == std::vector<int>{});
}

TEST_CASE("Prime factorization of a prime number 7") {
    factorizer f;
    REQUIRE(f.prime_factors(7) == std::vector<int>{7});
}

TEST_CASE("Prime factorization of 420") {
    factorizer f;
    REQUIRE(f.prime_factors(420) == std::vector<int>{2, 2, 3, 5, 7});
}

TEST_CASE("Prime factorization of 0") {
    factorizer f;
    REQUIRE(f.prime_factors(0) == std::vector<int>{});
}

TEST_CASE("Prime factorization of a negative number -15") {
    factorizer f;
    REQUIRE(f.prime_factors(-15) == std::vector<int>{});
}
