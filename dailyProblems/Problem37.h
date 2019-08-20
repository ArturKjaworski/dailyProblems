/*
The power set of a set is the set of all its subsets. Write a function that, given a set, generates its power set.
For example, given the set {1, 2, 3}, it should return {{}, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}}.
*/
#pragma once

#include "Problem.h"

#include <vector>
#include <algorithm>

class Problem37 : public Problem
{
public:
	Problem37();

	~Problem37();

	void Run() override;

private:
	std::vector<std::vector<int>> SetPowerSet(const std::vector<int>& set);
};

