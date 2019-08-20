#pragma once
/*
A unival tree (which stands for "universal value") is a tree where all nodes under it have the same value.
Given the root to a binary tree, count the number of unival subtrees.
*/

#include "Problem.h"

#include "Node.h"

#include <memory>

class Problem8 : public Problem
{
public:
	Problem8();
	~Problem8();

	void Run() override;
private:
	unsigned int GetUniTreeCount(Node* root);
};

