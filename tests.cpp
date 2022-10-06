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

TEST_CASE("countPrimes")
{
    //normal use case
    CHECK(countPrimes(0,20) == 8);
    CHECK(countPrimes(20, 25) == 1);

    //inclusive case
    CHECK(countPrimes(23, 29) == 2);

    //negatives case
    CHECK(countPrimes(-10, 20) == 8);
}

TEST_CASE("isTwinPrime")
{
    //normal use case
    CHECK(isTwinPrime(2) == false);
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(7) == true);
    CHECK(isTwinPrime(9) == false);
    CHECK(isTwinPrime(11) == true);

    //non-primes
    CHECK(isTwinPrime(-4) == false);
    CHECK(isTwinPrime(10) == false);
    CHECK(isTwinPrime(0) == false);
    CHECK(isTwinPrime(1) == false);
}

TEST_CASE("nextTwinPrime")
{
    //normal use case
    CHECK(nextTwinPrime(2) == 3);
    CHECK(nextTwinPrime(3) == 5);
    CHECK(nextTwinPrime(7) == 11);
    CHECK(nextTwinPrime(13) == 17);

    //non prime use cases
    CHECK(nextTwinPrime(9) == 11);
    CHECK(nextTwinPrime(15) == 17);
    CHECK(nextTwinPrime(1) == 3);
}

TEST_CASE("largestTwinPrime")
{
    //normal use case
    CHECK(largestTwinPrime(0,17) == 17);
    CHECK(largestTwinPrime(0, 23) == 19);
    CHECK(largestTwinPrime(3, 33) == 31);
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    //no twin primes in range and overlapping range
    CHECK(largestTwinPrime(0, 2) == -1);
    CHECK(largestTwinPrime(0, 0) == -1);
    CHECK(largestTwinPrime(-10, 0) == -1);
    CHECK(largestTwinPrime(14, 16) == -1);
}