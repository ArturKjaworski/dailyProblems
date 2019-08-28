#pragma once
/*
This problem was asked by Amazon.
Implement a stack that has the following methods:
•	push(val), which pushes an element onto the stack
•	pop(), which pops off and returns the topmost element of the stack. If there are no elements in the stack, then it should throw an error or return null.
•	max(), which returns the maximum value in the stack currently. If there are no elements in the stack, then it should throw an error or return null.
Each method should run in constant time.
*/
#include "Problem.h"

#include <vector>
#include <stack>

class MyStack 
{
public:

	MyStack() {};
	~MyStack() {};

	void Push(int val);
	void Pop();
	int Max();

private: 
	std::vector<int> values;
	std::stack<int> maxValues;

	int top;
};

class Problem43 : public Problem
{
public:
	Problem43();
	~Problem43();
	void Run() override;
};

