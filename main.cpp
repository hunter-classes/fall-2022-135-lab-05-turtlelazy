#include <iostream>


#include "funcs.h"

int main()
{
	std::cout << std::boolalpha;
	std::cout << "100 is Divisible by 25: " << isDivisibleBy(100,25) << "\n";

	std::cout << "2 is Prime: " << isPrime(2) << "\n";

	std::cout << "Next prime after 14 is " << nextPrime(14) << "\n";

	std::cout << "Number of primes between 1 and 10 is: " << countPrimes(1,10) << "\n";

	std::cout << "17 is a twin prime: " << isTwinPrime(17) << "\n";

	std::cout << "The next twin prime after 17 is: " << nextTwinPrime(17) << "\n";

	std::cout << "The largest twin prime within the range 5 and 18 is: " << largestTwinPrime(5, 18) << "\n";

	return 0;
}
