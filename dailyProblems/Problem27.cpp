/*
Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).
For example, given the string "([])[]({})", you should return true.
Given the string "([)]" or "((()", you should return false.
*/

#include "stdafx.h"
#include "Problem27.h"

#include <stack>
#include <map>

Problem27::Problem27()
{

}


Problem27::~Problem27()
{

}

void Problem27::Run()
{
	std::string str("{([])[]}");

	std::cout << "string balanced: " << (IsBalanced(str) ? "true" : "false") << std::endl;
}

bool Problem27::IsBalanced(const std::string & str)
{
	std::stack<char> brackets;
	std::map<char, char> beginBrackets = { {'}', '{'}, {']', '['}, {')', '('} };

	for (char el : str)
	{
		if (el == '{' || el == '[' || el == '(')
		{
			brackets.push(el);
			continue;
		}

		if (brackets.top() == beginBrackets[el])
		{
			brackets.pop();
			continue;
		}

		break;
	}

	return brackets.empty();
}
