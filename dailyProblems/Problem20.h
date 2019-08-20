#pragma once
#include "Problem.h"

#include <list>

class Problem20 : public Problem
{
public:
	Problem20();
	~Problem20();

	void Run() override;

private:

	int GetIntersectionStart(std::list<int>& listA, std::list<int>& listB);
};

