/*
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
Bonus: Can you do this in one pass?
*/
#include "stdafx.h"
#include "Problem1.h"

Problem1::Problem1()
{
}


Problem1::~Problem1()
{
}

void Problem1::Run()
{
	const std::vector<int> arr = { 10, 15, 3, 7 };
	int kk = 17;
	std::cout << (sumOfNums(kk, arr) ? "true" : "false") << std::endl;
}

bool Problem1::sumOfNums(int val, const std::vector<int>& arr)
{
	std::set<int> results;

	for (int el : arr)
	{
		if (results.find(val - el) == results.end())
			results.insert(el);
		else
			return true;
	}
	return false;
}