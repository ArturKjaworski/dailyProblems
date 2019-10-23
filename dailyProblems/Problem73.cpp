/*
Given the head of a singly linked list, reverse it in-place
e.g.
input:  1, 2, 3, 4, 5
output: 1, 5, 2, 4, 3
*/
#include "stdafx.h"
#include "Problem73.h"
#include "Problem73.h"

#include <vector>

Problem73::Problem73()
{
}

Problem73::~Problem73()
{
	
}

void Problem73::Run()
{
	ListNode* root = new ListNode(1, AddNode(2, AddNode(3, AddNode(4, AddNode(5, nullptr)))));

	Reverse(root);

	ListNode* head = root;

	while (head != nullptr)
	{
		std::cout << head->data << " ";
		head = head->next;
	}
	std::cout<<std::endl;

	SAFE_DELETE(root);
}

ListNode* Problem73::AddNode(int data, ListNode* next)
{
	ListNode* node = new ListNode(data, next);
	return node;
}

void Problem73::Reverse(ListNode* root)
{
	//O(n^2)
	//ListNode* curr = root;
	//ListNode* prev = nullptr;

	//while (curr != nullptr && curr->next != nullptr)
	//{
	//	ListNode* head = curr;
	//	while (head->next != nullptr)
	//	{
	//		prev = head;
	//		head = head->next;
	//	}

	//	if (prev != nullptr)
	//		prev->next = nullptr;

	//	head->next = curr->next;
	//	curr->next = head;

	//	curr = head->next;
	//}

	//SOLUTION 2 
	//O(n)
	ListNode* curr = root;
	std::vector<ListNode*> nodes;

	while (true)
	{
		nodes.push_back(curr);
		curr = curr->next;

		if (curr == nullptr)
			break;
	}

	int len = nodes.size()/2;

	for (size_t ii = 1; ii <= len; ii++)
	{
		nodes[nodes.size() - ii - 1]->next = nullptr;
		nodes[nodes.size() - ii]->next = nodes[ii];
		nodes[ii - 1]->next = nodes[nodes.size() - ii];
	}
}

