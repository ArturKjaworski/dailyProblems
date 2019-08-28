/*
This problem was asked by Amazon.
Implement a stack that has the following methods:
•	push(val), which pushes an element onto the stack
•	pop(), which pops off and returns the topmost element of the stack. If there are no elements in the stack, then it should throw an error or return null.
•	max(), which returns the maximum value in the stack currently. If there are no elements in the stack, then it should throw an error or return null.
Each method should run in constant time.
*/

#include "stdafx.h"
#include "Problem43.h"

/*
couldn't find solution myself, because I was thinking about problem which is impossible in stack... (when i found out i need to use stack for min values i thought about it more and problem disappears...)
*/
void MyStack::Push(int val)
{
	values.push_back(val);
	top = values.size() - 1;

	if (maxValues.empty() || maxValues.top() < val)
		maxValues.push(val);

}

void MyStack::Pop()
{
	if (values[top] == maxValues.top())
		maxValues.pop();

	values.erase(--(values.end()));
	--top;
}

int MyStack::Max()
{ 
	std::cout << "max value: " << maxValues.top() << std::endl;

	return maxValues.top();
}



Problem43::Problem43()
{
}


Problem43::~Problem43()
{
}

void Problem43::Run()
{
	MyStack stack;
	
	stack.Push(2);
	stack.Push(3);

	stack.Max();

	stack.Push(2);
	stack.Push(5);
	stack.Push(6);

	stack.Max();
	stack.Pop();

	stack.Max();
	stack.Pop();

	stack.Max();
}
