#pragma once
/*
Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).
For example, given the string "([])[]({})", you should return true.
Given the string "([)]" or "((()", you should return false.
*/
#include "Problem.h"



class Problem27 : public Problem
{
public:
	Problem27();
	~Problem27();

	void Run() override;

	bool IsBalanced(const std::string& str);
};

