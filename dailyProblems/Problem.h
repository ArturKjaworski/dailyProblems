#pragma once
#include <string>
#include <iostream>

class Problem
{
public:
	Problem();

	virtual ~Problem();

	virtual void Run() = 0;

};

