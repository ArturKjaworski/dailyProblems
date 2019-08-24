#pragma once
/*
Compute the running median of a sequence of numbers. That is, given a stream of numbers, print out the median of the list so far on each new element.
Recall that the median of an even-numbered list is the average of the two middle numbers.
*/

#include "Problem.h"

#include <vector>
#include <list>

class Problem33 :
	public Problem
{
public:
	Problem33();
	~Problem33();

	void Run() override;

private:
	std::vector<float> ComputeRunMedian(const std::list<int>& input);
};

