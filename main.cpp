#include <iostream>


#include "funcs.h"

int main()
{
	std::cout << std::boolalpha;
	std::cout << "100 is Divisible by 25: " << isDivisibleBy(100,25) << "\n";
	std::cout << "35 is Divisible by 17: " << isDivisibleBy(35, 17) << "\n";

	std::cout << "2 is Prime: " << isPrime(2) << "\n";
	std::cout << "10 is Prime: " << isPrime(10) << "\n";

	std::cout << "Next prime after 14 is " << nextPrime(14) << "\n";
	std::cout << "Next prime after 17 is " << nextPrime(17) << "\n";

	std::cout << "Number of primes between 1 and 10 is: " << countPrimes(1,10) << "\n";
	std::cout << "Number of primes between 23 and 31 is: " << countPrimes(23, 31) << "\n";

	std::cout << "17 is a twin prime: " << isTwinPrime(17) << "\n";
	std::cout << "23 is a twin prime: " << isTwinPrime(23) << "\n";

	return 0;
}
