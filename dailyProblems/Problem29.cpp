#include "stdafx.h"
#include "Problem29.h"

Problem29::Problem29()
{

}


Problem29::~Problem29()
{

}

void Problem29::Run()
{
	std::string str = { "AAAABBBCCDAA" };
	
	std::string result = encode(str);
	std::cout << "encode to: " << result << std::endl;
	std::cout << "decode to: " << decode(result) << std::endl;
}

std::string Problem29::encode(const std::string &str)
{
	std::string encoded = "";
	
	char last = str[0];
	int count = 0;


	for (size_t ii = 0; ii < str.size(); ii++)
	{
		if (str[ii] == last)
			++count;

		if (str[ii] != last || ii == str.size() - 1)
		{
			encoded += std::to_string(count) + last;
			count = 1;
			last = str[ii];
		}
	}

	return encoded;
}

std::string Problem29::decode(const std::string &str)
{
	std::string decoded = "";

	for (size_t ii = 0; ii < str.size(); ii += 2)
	{
		int count = str[ii] - '0';
		for (size_t jj = 0; jj < count; ++jj)
			decoded += str[ii + 1];
	}

	return decoded;
}
