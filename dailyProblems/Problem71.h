#pragma once
/*
Using a function rand7() that returns an integer from 1 to 7 (inclusive) with uniform probability, implement a function rand5() that returns an integer from 1 to 5 (inclusive).
*/
#include "Problem.h"
class Problem71 :
	public Problem
{
public:
	Problem71();
	~Problem71();

	void Run() override;

private:
	int Rand7();
	int Rand5();

};

