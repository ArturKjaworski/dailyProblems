#pragma once
/*
Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), find the minimum number of rooms required.
For example, given [(30, 75), (0, 50), (60, 150)], you should return 2.
*/
#include "Problem.h"

#include <vector>

class Problem21 : public Problem
{
public:
	Problem21();
	~Problem21();

	void Run() override;

private:
	unsigned int GetMinRooms(std::vector<std::pair<int, int>>& timeInterv);
};

