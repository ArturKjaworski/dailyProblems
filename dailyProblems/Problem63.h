#pragma once
/*
Given a 2D matrix of characters and a target word, write a function that returns whether the word can be found in the matrix by going left-to-right, or up-to-down.
*/
#include "Problem.h"

#include <string>

class Problem63 : public Problem
{
public:
	Problem63();
	~Problem63();

	static const int COLS = 4;
	static const int ROWS = 4;

	void Run()override;

private:
	

	bool IsWordFound(char arr[COLS][ROWS], const std::string& word);
};

