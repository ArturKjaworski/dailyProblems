#pragma once
/*
Suppose an arithmetic expression is given as a binary tree. Each leaf is an integer and each internal node is one of '+', '−', '∗', or '/'.
Given the root to such a tree, write a function to evaluate it.
*/
#include "Problem.h"

#include "Node.h"

class Problem50 : public Problem
{
public:
	Problem50();
	~Problem50();

	void Run()override;

private:
	float EvalTree(Node* root);
};

