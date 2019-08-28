/*
Using a function rand5() that returns an integer from 1 to 5 (inclusive) with uniform probability, implement a function rand7() that returns an integer from 1 to 7 (inclusive).
*/

#include "stdafx.h"
#include "Problem45.h"

#include <ctime>

Problem45::Problem45()
{
	srand(time(NULL));
}

Problem45::~Problem45()
{
}

void Problem45::Run()
{
	std::cout << rand7() << std::endl;
}

int Problem45::rand5()
{
	return rand() % 5 + 1;
}

int Problem45::rand7()
{
	//had a lot of problems, a lot of help from internet
	int sum = 5 * rand5() + rand5() - 5;

	if (sum < 22)
		return sum % 7 + 1;
	else
		return rand7();
}

