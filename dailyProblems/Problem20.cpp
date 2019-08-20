/*
Given two singly linked lists that intersect at some point, find the intersecting node.The lists are non - cyclical.
For example, given A = 3 -> 7 -> 8 -> 10 and B = 99 -> 1 -> 8 -> 10, return the node with value 8.
In this example, assume nodes with the same value are the exact same node objects.
*/

#include "stdafx.h"
#include "Problem20.h"

Problem20::Problem20()
{
}

Problem20::~Problem20()
{
}

void Problem20::Run()
{
	std::list<int> listA = {3, 7, 8, 10};
	std::list<int> listB = {99, 1, 8, 10};

	int inter = GetIntersectionStart(listA, listB);

	if (inter == NULL)
		std::cout << "no interscetion\n";
	else
		std::cout <<"Intersections start at: "<< inter <<std::endl;
}

 int Problem20::GetIntersectionStart(std::list<int>& listA, std::list<int>& listB)
{
	 //cannot use size() and rbegin(), cus its 2 singly linked lists
	int listASize = 0;
	int listBSize = 0;

	for (auto& el : listA)
		++listASize;

	for (auto& el : listB)
		++listBSize;

	int diff = abs(listASize - listBSize);
	 
	auto iter2 = listASize > listBSize ? listB.begin() : listA.begin();

	for (auto iter1 : (listASize > listBSize ? listA : listB))
	{
		if (diff > 0)
		{
			--diff;
			continue;
		}

		if (iter1 == *iter2)
			return iter1;

		++iter2;
	}
	 return NULL;
}
