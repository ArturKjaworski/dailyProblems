/*
Using a function rand7() that returns an integer from 1 to 7 (inclusive) with uniform probability, implement a function rand5() that returns an integer from 1 to 5 (inclusive).
*/
#include "stdafx.h"
#include "Problem71.h"

Problem71::Problem71()
{
}


Problem71::~Problem71()
{
}

void Problem71::Run()
{
	std::cout << Rand5() << std::endl;
}

int Problem71::Rand7()
{
	return rand() % 7 + 1;
}

int Problem71::Rand5()
{
	//did same as in problem 45 
	int sum = 7 * Rand7() - 7 + Rand7();

	if (sum < 46)
		return (sum % 5) + 1;		
	else
		return Rand5();

	//solution 2

	//while (true)
	//{
	//int num = Rand7();

	//if (num<6)
	//	return num;
	//}
	
}
