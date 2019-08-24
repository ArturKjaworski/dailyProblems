/*
Compute the running median of a sequence of numbers. That is, given a stream of numbers, print out the median of the list so far on each new element.
Recall that the median of an even-numbered list is the average of the two middle numbers.
*/

#include "stdafx.h"
#include "Problem33.h"

#include <algorithm>

Problem33::Problem33()
{
}


Problem33::~Problem33()
{
}

void Problem33::Run()
{
	std::list<int> input = { 2, 1, 5, 7, 2, 0, 5 };
	std::cout << "running median for: ";
		for (int num : input)
			std::cout << num << " ";

		std::cout << "\nis: ";
		std::vector<float> result = ComputeRunMedian(input);

		for (float num : result)
			std::cout << num << " ";
}

std::vector<float> Problem33::ComputeRunMedian(const std::list<int>& input)
{
	std::vector<float> result;
	result.reserve(input.size());

	std::vector<float> tmp;

	for (auto num : input)
	{
		tmp.push_back(num);
		std::sort(tmp.begin(), tmp.end());

		//median		
		int id = (tmp.size() / 2);

		if (tmp.size() % 2 == 0)
			result.push_back((tmp[id] + tmp[id-1]) / 2);
		else
			result.push_back(tmp[id]);
	}
	return result;
}

