#include "Utils.h"
#include <iostream>

void Utils::PrintResult(const vector<double>& v, const int&p, const int& width)
{

	UINT n = ceil(v.size()) / static_cast<DBL>(width);
	std::cout << "\n ";
	for (double i : v)
		std::cout << std::left << std::setw(p + 4) << i;

	std::cout << "\n";
	std::cout << std::fixed << std::setprecision(p);
	for( UINT i = 0; i < v.size();i++)
	{
		for (UINT j = 0; j < n; j++)
		{
			std::cout << std::right << std::setw(p + 4) << v[j * width + i];
		}
		std::cout << "\n";
	}
}

void Utils::PrintFile(const vector<vector<double>>& v, const V1DS& s ,const int& n)
{
	cout << "\n       ";


	for(UINT i =0; i < s.size();i++)
		std::cout << std::left << std::setw(6) << s[i];
	std::cout << "\n";
	for(UINT i = 0; i < n;i++)
	{
		for(UINT j = 0; j < v[0].size();j++)
		{
			cout << std::right << std::setw(6) << v[i][j];
		}
		std::cout << "\n";
	}
}

void Utils::ErrorChk(const string& s)
{
	std::cerr << "\n Run-time error...\n";
	std::cerr << "Message: " << s << "\n\n";
	std::cin.get();
	std::exit(1);
}
