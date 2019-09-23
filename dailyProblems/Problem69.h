#pragma once
/*
Given a list of integers, return the largest product that can be made by multiplying any three integers.
*/
#include "Problem.h"

#include <vector>

class Problem69 :
	public Problem
{
public:
	Problem69();
	~Problem69();

	void Run()override;

private:
	int GetLargestProduct(std::vector<int> input);
};

