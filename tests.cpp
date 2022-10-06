#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("isDivisibleBy")
{
    //divisible use case
    CHECK(isDivisibleBy(100, 25) == true);
    //divisible by 1
    CHECK(isDivisibleBy(25, 1) == true);
    //divisible by itself
    CHECK(isDivisibleBy(25, 25) == true);
    //not divisible use case
    CHECK(isDivisibleBy(35, 17) == false);
    //divide by zero case
    CHECK(isDivisibleBy(35, 0) == false);
    //divide by negative case
    CHECK(isDivisibleBy(35, -5) == true);
}

TEST_CASE("isPrime")
{
    //1 is not prime
    CHECK(isPrime(1) == false);
    //0 is not prime
    CHECK(isPrime(0) == false);
    //negatives are not prime
    CHECK(isPrime(-5) == false);

    //2 is prime
    CHECK(isPrime(2) == true);
    //11 is prime
    CHECK(isPrime(11) == true);

    //10 is not prime
    CHECK(isPrime(10) == false);
    //15 is not prime
    CHECK(isPrime(15) == false);
}

TEST_CASE("nextPrime")
{
    //normal use case
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
    //negative number
    CHECK(nextPrime(-10) == 2);

    //zero case
    CHECK(nextPrime(0) == 2);

    //one case
    CHECK(nextPrime(1) == 2);
}
