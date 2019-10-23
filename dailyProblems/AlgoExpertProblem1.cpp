#include "stdafx.h"
#include "AlgoExpertProblem1.h"
/*
n-th Fibonacci sequence number
*/

AlgoExpertProblem1::AlgoExpertProblem1()
{
}


AlgoExpertProblem1::~AlgoExpertProblem1()
{
}

void AlgoExpertProblem1::Run()
{
	int n = 6;
	std::cout << n << "-th number is: " << GetNthFib(n) << std::endl;
}

int AlgoExpertProblem1::GetNthFib(int n)
{
	if (n == 1)
		return 0;
	else if (n ==2)
		return 1;
	
	int sum = 1;
	int prev = 0;

	for (int ii = 3; ii <= n; ++ii)
	{
		int tmp = sum;
		sum += prev;
		prev = tmp;
	}

	return sum;
}
