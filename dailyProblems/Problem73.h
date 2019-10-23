#pragma once
/*
Given the head of a singly linked list, reverse it in-place
*/
#include "Problem.h"

struct ListNode
{
	ListNode(int data) : data(data) {}
	ListNode(int data, ListNode* next) : data(data), next(next) {}

	~ListNode() { SAFE_DELETE(next); }

	ListNode* next = nullptr;
	int data = 0;
};

class Problem73 : public Problem
{
public:
	Problem73();
	~Problem73();

	void Run()override;

private:
	ListNode* AddNode(int data, ListNode* next);
	void Reverse(ListNode* root);

};

