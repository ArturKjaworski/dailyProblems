#pragma once
/*
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
Bonus: Can you do this in one pass?
*/

#include "Problem.h"

#include <vector>
#include <set>

class Problem1 : public Problem
{
public:
	Problem1();
	~Problem1();

	void Run() override;

private:
	bool sumOfNums(int val, const std::vector<int>& arr);
};

