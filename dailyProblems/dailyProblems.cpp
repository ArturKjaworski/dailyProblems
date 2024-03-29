#include "stdafx.h"

#include "AlgoExpertProblem1.h"

#include "Problem1.h"
#include "Problem8.h"
#include "Problem20.h"
#include "Problem21.h"
#include "Problem23.h"		//empty
#include "Problem27.h"
#include "Problem29.h"
#include "Problem31.h"		//empty
#include "Problem33.h"		
#include "Problem37.h"
#include "Problem43.h"
#include "Problem45.h"
#include "Problem50.h"
#include "Problem63.h"
#include "Problem65.h"
#include "Problem69.h"
#include "Problem70.h"
#include "Problem71.h"
#include "Problem73.h"

#include <iostream>

#include <vector>

Problem* problem = nullptr;

#pragma region delete that
/*
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
Follow-up: what if you can't use division?
*/
#ifdef PROBLEM_2


std::vector<int> productNumbers(const std::vector<int> arr)
{
	std::vector<int> result(arr.size());

#pragma region solution with division

	/*	int total = 1;
	for (int el : arr)
		total *= (el != 0 ? el : 1);

	for (int ii = 0; ii < arr.size(); ++ii)
		if (arr[ii] != 0)
			result[ii] = (total / arr[ii]);
		else
			result[ii] = total;
	*/
#pragma endregion

#pragma region solution without division - couldnt solve by myself
	
	int tmp = 1;
	for (int ii = 0; ii < arr.size(); ++ii)
	{
		result[ii] = tmp;
		tmp *= arr[ii];
	}

	tmp = 1;
	for (int ii = arr.size() - 1; ii >= 0; --ii)
	{
		result[ii] *= tmp;
		tmp *= arr[ii];
	}

#pragma endregion

	return	result;
}
#endif

#ifdef PROBLEM_3

/*class Node
{
	std::string val;
	Node* left;
	Node* right;

public:
	Node(std::string val, Node* left = nullptr, Node* right = nullptr) :
		  val(val)
		, left(left)
		, right(right)
	{}

	~Node()
	{
		safeDelete(left);
		safeDelete(right);
	}

	void setLeft(Node* node)
	{
		left = node;
	}

	void setRight(Node* node)
	{
		right = node;
	}

	std::string getVal()	{ return val; }
	Node* getLeft()			{ return left; }
	Node* getRight()		{ return right; }

private:
	void safeDelete(void* ptr)
	{
		if (ptr != nullptr)
		{
			delete(ptr);
			ptr = nullptr;
		}
	}
};*/

//val(root)-val(left)-val(leftleft)-val(leftleftleft);val(right)-val(left);val(right);right;
std::string serialize(Node* root)
{
	std::string s;

	s = root->getVal();

	if (root->getLeft() != nullptr)
	{
		s += "-" + serialize(root->getLeft());
	}

	if (root->getRight() != nullptr)
	{
		s += "-" + serialize(root->getRight());
	}

	if (root->getLeft() == nullptr || root->getRight() == nullptr)
		s += ";";

	return s;
}

Node* deserialize(std::string& info)
{
	Node* root;

	std::string tmp("");

	for (auto it = info.begin(); it != info.end(); it++)
	{
		if ((*it != '-') && (*it != ';'))
		{
			tmp += *it;
		}
		else
		{
			root = new Node(tmp);

			if (*(it) == '-')
			{
				//createNode(tmp);	//left
				info.erase(it - tmp.length(), it + 1);
				if (root->getLeft() == nullptr)
				{
					root->setLeft(deserialize(info));
					
					root->getLeft()->getVal();
				}
				else
				{
					root->setRight(deserialize(info));
					root->getRight()->getVal();
				}
					
			}
				
			if (*(it) == ';')
			{
				//createNode(tmp);	//right
				//go back to parent
				info.erase(it - tmp.length(), it + 1);
			}
			break;
		}
	}

	return root;
}

#endif
#pragma endregion


bool menu(int c)
{
	system("cls");

	switch (c)
	{
		if (problem != nullptr)
		{
			delete(problem);
			problem = nullptr;
		}
	case 1:
	{
		problem = new Problem1;
		break;
	}
	case 8:
	{
		problem = new Problem8;
		break;
	}
	case 20:
	{
		problem = new Problem20;
		break;
	}
	case 21:
	{
		problem = new Problem21;
		break;
	}
	case 27:
	{
		problem = new Problem27;
		break;
	}
	case 29:
	{
		problem = new Problem29;
		break;
	}
	case 31:
	{
		problem = new Problem31; 
		break;
	}
	case 33:
	{
		problem = new Problem33;
		break;
	}
	case 37:
	{
		problem = new Problem37;
		break;
	}
	case 43:
	{
		problem = new Problem43;
		break;
	}
	case 45:
	{
		problem = new Problem45;
		break;
	}
	case 50:
	{
		problem = new Problem50;
		break;
	}
	case 63:
	{
		problem = new Problem63;
		break;
	}	
	case 65:
	{
		problem = new Problem65;
		break;
	}
	case 69:
	{
		problem = new Problem69;
		break;
	}
	case 70:
	{
		problem = new Problem70;
		break;
	}
	case 71:
	{
		problem = new Problem71;
		break;
	}
	case 73:
	{
		problem = new Problem73;
		break;
	}
	case 999:
	{
		problem = new AlgoExpertProblem1;
		break;
	}
	default:
		delete(problem);
		problem = nullptr;
		break;
	}

	if (problem != nullptr)
	{
		problem->Run();
		return true;
	}
	return false;
}

int main()
{
#pragma region shouldnt be there
#ifdef PROBLEM_1
	Problem1 problem;
#endif

#ifdef PROBLEM_2
	const std::vector<int> vec = { 1, 2, 3, 4, 5 };
	std::vector<int> res = productNumbers(vec);

	for (int prod : res)
		std::cout << prod << std::endl;
#endif

#ifdef PROBLEM_3

	//Node* root = new Node("root", new Node("left", new Node("left.left", new Node("left.left.left"), new Node("left.left.right", new Node("left.left.right.left"), new Node("left.left.right.right")))), new Node("right"));

	//Node* root = new Node("root", new Node("left", new Node("left.left")), new Node("right"));

	//std::string info = serialize(root);
	//std::cout << info.c_str();
	//std::cout << std::endl << std::endl;

	//deserialize(info);

//	Node* node = new Node("root", new Node("left", new Node("left.left")), new Node("right"));

/*	if (std::strcmp((deserialize(serialize(node)))->getRight()->getVal().c_str(), "right") == 0)
		std::cout << "yup" << std::endl;*/

#endif
#pragma endregion
	
	while (true)
	{
		system("cls");
		std::cout << "which problem? (1, 8, 20, 21, 27, 29, 33, 37, 43, 45, 50, 63, 65, 69, 70, 71, 73)" << std::endl;
		std::cout << "algoexpert problem? (999)" << std::endl<<std::endl;
		std::cout << "9999 to exit" << std::endl;

		int c;
		std::cin >> c;

		bool res = menu(c);

		if (c == 9999)
			break;
		
		if (res)
		{
			system("pause");
		}
	}

	if (problem != nullptr)
	{
		delete(problem);
		problem = nullptr;
	}
    return 0;
}

