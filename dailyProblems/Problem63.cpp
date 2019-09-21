/*
Given a 2D matrix of characters and a target word, write a function that returns whether the word can be found in the matrix by going left-to-right, or up-to-down.
*/
#include "stdafx.h"
#include "Problem63.h"

Problem63::Problem63()
{
}

Problem63::~Problem63()
{
}

void Problem63::Run()
{
	char arr[ROWS][COLS] =
	{ 
		{'F', 'A', 'C', 'I', 'A'},
		{'O', 'B', 'Q', 'P', 'A'},
		{'A', 'N', 'O', 'B', 'A'},
		{'A', 'M', 'A', 'S', 'S'},
	};

	std::string word("MASS");

	std::cout<<"Word "<< (IsWordFound(arr, word) ? "found" : "not found") << std::endl;
}

bool Problem63::IsWordFound(char arr[ROWS][COLS], const std::string& word)		//1 parameter - don't like, but it works...
{
	int wordSize = word.size();
	if (wordSize > COLS && wordSize > ROWS)
		return false;

	std::string rowString("");
	std::string colString[COLS];

	for (int row = 0; row < ROWS; ++row)
	{
		for (int col = 0; col < COLS; ++col)
		{
			if ((wordSize - col + rowString.size() >= 0) && arr[row][col] == word[rowString.size()])
			{
				rowString += word[col];
				if (rowString.size() == wordSize)
					return true;
			}
			else
				rowString = "";
				
			if ((wordSize - row + colString[col].size() >= 0) && arr[row][col] == word[colString[col].size()])
			{
				colString[col] += word[colString[col].size()];
				if (colString[col].size() == wordSize)
					return true;
			}
			else
				colString[col] = "";
		}
	}

	return false;
}


