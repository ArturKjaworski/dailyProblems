#pragma once
/*
Classs made before smart pointers usage in my code
Class for:
	Problem 3,
	Problem 8,
*/
#include <string>

class Node
{
public:
	Node(std::string val, Node* left = nullptr, Node* right = nullptr);
	Node(Node* node);
	~Node();

	void SetLeft(Node* node);
	void SetRight(Node* node);

	const std::string& GetVal() const { return val; }
	Node* GetLeft() const { return left; }
	Node* GetRight() const { return right; }

private:
	std::string val;
	Node* left;
	Node* right;

	void SafeDelete(Node* ptr);
};

