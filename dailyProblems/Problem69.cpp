/*
Given a list of integers, return the largest product that can be made by multiplying any three integers.
*/
#include "stdafx.h"
#include "Problem69.h"

#include <algorithm>

Problem69::Problem69()
{
}


Problem69::~Problem69()
{
}

void Problem69::Run()
{
	std::vector<int> input = {-10, -10, -5, 2};

	std::cout<<"Largest product of triple number is: "<<GetLargestProduct(input)<<std::endl;

}

int Problem69::GetLargestProduct(std::vector<int> input)
{
	std::vector<int>minNums = {INT_MAX, INT_MAX};
	std::vector<int>maxNums = {INT_MIN, INT_MIN, INT_MIN};

	if (input.size() < 3)
	{
		std::cout << "input need atleast 3 numbers (ERROR)";
		return -1;
	}

	for (int el : input)
	{
		if (el < minNums[0])
		{
			minNums[1] = minNums[0];
			minNums[0] = el;
		}
		else if (el < minNums[1])
			minNums[1] = el;
		
		if (el > maxNums[0])
		{
			maxNums[2] = maxNums[1];
			maxNums[1] = maxNums[0];
			maxNums[0] = el;
		}
		else if (el > maxNums[1])
		{
			maxNums[2] = maxNums[1];
			maxNums[1] = el;
		}
		else if (el > maxNums[2])
			maxNums[2] = el;
	}
	
	int A =	minNums[0] * minNums[1] * maxNums[0];
	int B =	maxNums[0] * maxNums[1] * maxNums[2];
	
	return std::max(A, B);
}
