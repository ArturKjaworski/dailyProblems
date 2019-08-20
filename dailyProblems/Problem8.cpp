/*
A unival tree (which stands for "universal value") is a tree where all nodes under it have the same value.
Given the root to a binary tree, count the number of unival subtrees.
*/

#include "stdafx.h"
#include "problem8.h"

Problem8::Problem8()
{
}

Problem8::~Problem8()
{
}

void Problem8::Run()
{
	Node* root = new Node("0", new Node("1"), new Node("0", new Node("1", new Node("1"), new Node("1")), new Node("0")));
	std::cout << GetUniTreeCount(root) << std::endl;

	delete(root);
}

unsigned int Problem8::GetUniTreeCount(Node* root)
{
	unsigned int count = 0;

	std::string nodeVal = root->GetVal();

	Node* nodeChildLeft = root->GetLeft();
	Node* nodeChildRight = root->GetRight();

	if (nodeChildLeft == nullptr &&  nodeChildRight == nullptr)
		return ++count;

	if ((std::strcmp(nodeChildLeft->GetVal().c_str(), nodeVal.c_str()) == 0) && std::strcmp(nodeChildRight->GetVal().c_str(), nodeVal.c_str()) == 0)
		++count;

	if (nodeChildRight != nullptr)
		count += GetUniTreeCount(nodeChildRight);

	if (nodeChildLeft != nullptr)
		count += GetUniTreeCount(nodeChildLeft);

	return count;
}