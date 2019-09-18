/*
Suppose an arithmetic expression is given as a binary tree. Each leaf is an integer and each internal node is one of '+', '−', '∗', or '/'.
Given the root to such a tree, write a function to evaluate it.
*/
#include "stdafx.h"
#include "Problem50.h"

#include <string>

Problem50::Problem50()
{
}

Problem50::~Problem50()
{

}

void Problem50::Run()
{
	Node* root = new Node("*", new Node("+", new Node("3"), new Node("2")), new Node("+", new Node("4"), new Node("5")));

	std::cout << "tree evaluation is equal to: "<< EvalTree(root) << std::endl;
	delete(root);
}

float Problem50::EvalTree(Node* root)
{
	float res = 0;
	std::string operation;

	Node* nodeChildLeft = root->GetLeft();
	Node* nodeChildRight = root->GetRight();
	std::string tmpVal = root->GetVal();

	if (nodeChildLeft == nullptr && nodeChildRight == nullptr)
		return std::stof(root->GetVal());		//no idiot check

	float first = EvalTree(nodeChildLeft);
	float second = EvalTree(nodeChildRight);

	if (tmpVal == "+")
		res = first + second;
	else if (tmpVal == "-")
		res = first - second;
	else if (tmpVal == "*")
		res = first * second;
	else if (tmpVal == "/")
	{
		if (second == 0)
		{
			std::cout << "Can't divide by 0";
		}
		else
			res = first / second;
	}

	return res;
}