#pragma once
#include "Problem.h"

/*
n-th Fibonacci sequence number
*/
class AlgoExpertProblem1 : public Problem
{
public:
	AlgoExpertProblem1();
	~AlgoExpertProblem1();

	void Run()override;

private:
	int GetNthFib(int n);
};

