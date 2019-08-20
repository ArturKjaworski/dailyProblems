#pragma once
#include "Problem.h"
class Problem29 : public Problem
{
public:
	Problem29();
	~Problem29();

	void Run() override;

	std::string encode(const std::string&);
	std::string decode(const std::string&);
};

