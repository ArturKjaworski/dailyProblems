#pragma once
#include "Problem.h"
class Problem31 : public Problem
{
public:
	Problem31();
	~Problem31();

	void Run() override;

private:
	unsigned int ComputeDistance(std::string str1, const std::string& str2);
};

