#include <vector>
#include <iostream>
#include <stdlib.h>

void generatePrimes( long int max )
{//Generate primes up to max.
	std::vector<unsigned int> primes;
	bool isPrime;

	for( long int i = 2; i <= max; i++ )
	{
		isPrime = true;

		for( unsigned long int j = 0; (j < primes.size()) && isPrime; j++ )
		{
			if( i%primes.at(j) == 0 )
			{
				isPrime = false;
			}
		}

		if( isPrime )
		{
			std::cout << i << std::endl;
			primes.push_back( i );
		}
	}

	std::cout << "Found " << primes.size() << " primes out of " << max << " numbers." << std::endl;
	std::cout << "Which is about 1 in " << max/primes.size() << std::endl;
}

int main( int argc, const char* argv[] )
{//Test out the Random Number Generator.
	if( argc != 2 )
	{
		std::cerr << "Usage: " << argv[0] << " maxPrime" << std::endl;
	}
	else
	{
		generatePrimes( atol(argv[1]) );
	}
	
	return 0;
}
