#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("testing expected vector returns")
{

	vector<int> expected {2,3,5,7};
	vector<int> expected1 {2,3,5,7,11,13};
	vector<int> expected2 {2,3,5,7,11,13,17,19,23,29};
	vector<int> expected3 {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};


	REQUIRE(get_primes(10) == expected);
	REQUIRE(get_primes(15) == expected1);
	REQUIRE(get_primes(30) == expected2);
	REQUIRE(get_primes(50) == expected3);
}
