#pragma once
/*
A number is considered perfect if its digits sum up to exactly 10.
Given a positive integer n, return the n-th perfect number.
*/
#include "Problem.h"
class Problem70 :
	public Problem
{
public:
	Problem70();
	~Problem70();

	void Run()override;

private:
	int CreatePerfectNumber(int number);
	int GetNthPerfectNumber(int number);
};

