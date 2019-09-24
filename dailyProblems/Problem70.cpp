/*
A number is considered perfect if its digits sum up to exactly 10.
Given a positive integer n, return the n-th perfect number.
*/
#include "stdafx.h"
#include "Problem70.h"


Problem70::Problem70()
{
}


Problem70::~Problem70()
{
}

void Problem70::Run()
{
	int number = 1230;
	std::cout << "Depends on interpretation..." << std::endl<<std::endl;

	std::cout << "Perfect number created from number " << number << " is ";
	std::cout << CreatePerfectNumber(number) << std::endl<<std::endl;

	std::cout << number <<"-th perfect number is: " << GetNthPerfectNumber(number) << std::endl;

}

int Problem70::CreatePerfectNumber(int number)
{
	int sum = 0;
	for (int part = number; part > 0; part /= 10)
		sum += part % 10;

	if (sum < 10)
	{
		number *= 10;
		number += sum;
	}

	if (sum > 10)
		std::cout << "impossible to create perfect number" << std::endl;

	return number;
}

int Problem70::GetNthPerfectNumber(int number)
{
	int counter = 0;
	for (int curr = 19;; curr+=9)
	{
		int sum = 0;
		for (int ii = curr; ii > 0; ii /= 10)
			sum += ii%10;

		if (sum == 10)
			++counter;

		if (counter == number)
			return curr;
	}

	return number;
}
