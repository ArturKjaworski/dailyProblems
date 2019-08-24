/*
The edit distance between two strings refers to the minimum number of character insertions, deletions, and substitutions required to change one string to the other. For example, the edit distance between “kitten” and “sitting” is three: substitute the “k” for “s”, substitute the “e” for “i”, and append a “g”.
Given two strings, compute the edit distance between them.
*/

#include "stdafx.h"
#include "Problem31.h"


Problem31::Problem31()
{
}


Problem31::~Problem31()
{
}

void Problem31::Run()
{
	std::string str1 = "sittin";
	std::string str2 = "kitten";
	
	std::cout << "edit distance between: " << str1 << "and " << str2 <<"is: "<< ComputeDistance(str1, str2) << std::endl;
}

unsigned int Problem31::ComputeDistance(std::string str1, const std::string& str2)
{
	unsigned int count = 0;


	for (size_t ii = 0; ii < str2.size(); ++ii)
	{
		if (str2[ii] != str1[ii])
			++count;
	}

	return count;
}


