#pragma once
#include <string>
#include <iostream>

#define SAFE_DELETE(ptr) { if (ptr != nullptr) {delete(ptr); ptr = nullptr;} }

class Problem
{
public:
	Problem();

	virtual ~Problem();

	virtual void Run() = 0;

};

