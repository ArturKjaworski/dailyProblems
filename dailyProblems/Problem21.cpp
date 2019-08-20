/*
Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), find the minimum number of rooms required.
For example, given [(30, 75), (0, 50), (60, 150)], you should return 2.
*/
#include "stdafx.h"
#include "Problem21.h"

#include <algorithm>

Problem21::Problem21()
{

}


Problem21::~Problem21()
{

}

void Problem21::Run()
{
	std::vector<std::pair<int, int>> intervals = { {30, 75}, {0, 50}, {60, 150}, {0, 30} };
	unsigned int rooms = GetMinRooms(intervals);

	std::cout << "minimum number of rooms required: " << rooms << std::endl;
}

unsigned int Problem21::GetMinRooms(std::vector<std::pair<int, int>>& timeInterv)
{
	std::vector<std::vector<std::pair<int, int>>> minRooms;

	for (auto& pair : timeInterv)
	{
		bool roomUsed = false;
		for (auto& room : minRooms)
		{
			if (std::find_if(room.begin(), room.end(), [&](std::pair<int, int>& interval)
			{
				if ((interval.first > pair.first && interval.first < pair.second) || (interval.second > pair.first && interval.second < pair.second))
					return true;	//room not usable 100% check another one

				return false;
			}) == room.end())
			{
				room.push_back(std::make_pair(pair.first, pair.second));
				roomUsed = true;
				break;
			}
		}
		//add another room
		if (!roomUsed)
			minRooms.push_back({ std::make_pair(pair.first, pair.second) });
	}

	return minRooms.size();
}


