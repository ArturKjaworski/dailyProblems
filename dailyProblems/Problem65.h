#pragma once
#include "Problem.h"
class Problem65 :
	public Problem
{
public:
	Problem65();
	~Problem65();

	static const int COLS = 4;
	static const int ROWS = 4;

	void Run()override;

private:
	void printSpiral(int arr[ROWS][COLS]);
};

