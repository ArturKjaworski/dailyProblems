#include "stdafx.h"
#include "Problem65.h"


Problem65::Problem65()
{
}


Problem65::~Problem65()
{
}

void Problem65::Run()
{
	int arr[ROWS][COLS] =
	{
		{  1,  2,  3,  4},//  5, 21 },
		{  6,  7,  8,  9},// 10, 22 },
		{ 11, 12, 13, 14},// 15, 23 },
		{ 16, 17, 18, 19} //20, 24 }
		/*{ 25, 26, 27, 28, 29, 30 },
		{ 31, 32, 33, 34, 35, 36 }*/
	};						

	printSpiral(arr);
}

void Problem65::printSpiral(int arr[ROWS][COLS])
{
	
	int rowMax = 0;
	int colMax = 0;

	int tmp = (2 * COLS) + (2 * (ROWS - 2)) - 1;

	int rowCounter =0;
	int colCounter =0;

	for (int ii = 0; ii < ROWS * COLS; ++ii)
	{
		std::cout << arr[rowCounter][colCounter] << std::endl;

		if (ii - tmp == 0)
		{
			++rowMax;
			++colMax;

			tmp += (2 * (COLS - 1 - colMax)) + (2 * (ROWS - 2 - rowMax - 1));
		}

		//COLS
		if (colCounter < COLS - 1 - colMax && rowCounter - rowMax == 0)
		{
			++colCounter;
			continue;
		}
		else if (colCounter > colMax && rowCounter  == ROWS - 1 - rowMax)
		{
			--colCounter;
			continue;
		}

		//ROWS
		if (rowCounter < (ROWS - 1) - rowMax && colCounter == COLS - 1 - colMax)
			++rowCounter;
		else if (rowCounter > rowMax && colCounter - colMax == 0)
			--rowCounter;
	}
}
