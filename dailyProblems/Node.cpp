#include "stdafx.h"
#include "Node.h"


Node::Node(std::string val, Node* left, Node* right) :
	val(val)
	, left(left)
	, right(right)
{}

Node::Node(Node* node)
{
	val = node->GetVal();
	left = node->GetLeft();
	right = node->GetRight();
}

Node::~Node()
{
	SafeDelete(left);
	SafeDelete(right);
}

void Node::SetLeft(Node* node)
{
	left = node;
}

void Node::SetRight(Node* node)
{
	right = node;
}

void Node::SafeDelete(Node* ptr)
{
	if (ptr != nullptr)
	{
		delete(ptr);
		ptr = nullptr;
	}
}