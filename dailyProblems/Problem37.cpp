/*
The power set of a set is the set of all its subsets. Write a function that, given a set, generates its power set.
For example, given the set {1, 2, 3}, it should return {{}, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}}.
*/

#include "stdafx.h"
#include "Problem37.h"

Problem37::Problem37()
{

}

Problem37::~Problem37()
{
}

std::vector<std::vector<int>> Problem37::SetPowerSet(const std::vector<int>& set)
{
	std::vector<std::vector<int>> powerSet;

	std::vector<int> tmp;

	int powerSetSize = pow(2, set.size());
	powerSet.reserve(powerSetSize);

	//help required
	for (size_t counter = 0; counter < powerSetSize; ++counter)
	{
		for (size_t ii = 0; ii < set.size(); ++ii)
			if (counter & (1 << ii))
			{
				tmp.push_back(set[ii]);
			}
		powerSet.push_back(tmp);
		tmp.clear();
	}

	std::sort(powerSet.begin(), powerSet.end(), [](std::vector<int> a, std::vector<int> b)
	{
		return a.size() < b.size();
	});

	return powerSet;
}


void Problem37::Run()
{
	std::vector<int> set = { 1, 2, 3 };
	std::vector<std::vector<int>> powerSet = SetPowerSet(set);
	for (const auto& vec : powerSet)
	{
		for (const auto& el : vec)
			std::cout << el << " ";
		std::cout << std::endl;
	}
}


