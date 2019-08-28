#pragma once
/*
Using a function rand5() that returns an integer from 1 to 5 (inclusive) with uniform probability, implement a function rand7() that returns an integer from 1 to 7 (inclusive).
*/
#include "Problem.h"
class Problem45 : public Problem
{
public:
	Problem45();
	~Problem45();

	void Run() override;

private:
	int rand5();
	int rand7();
};

