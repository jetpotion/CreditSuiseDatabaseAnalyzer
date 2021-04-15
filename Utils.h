#ifndef UTILS_HPP
#define UTILS_HPP
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using std::string;
using std::vector;
using std::cout;
using std::setw;
using std::cerr;
using UINT = std::size_t;
using  DBL = double;
using V1DI = vector<int>;
using V1DD = vector<double>;
using V2DI = vector<vector<int>>;
using V2DF = vector<vector<double>>;
using  V2DD = vector<vector<double>>;

class Utils
{
public:
	//Employ  constructors,destructors,copy constructors and operaotrs
	
	Utils() = default;
	virtual ~Utils() noexcept = default;
	Utils(const Utils& source) = default;
	Utils& operator=(const Utils& source) = default;
	static void PrintResult(const vector<double>& v,const int&p, const int& width);
	static void PrintFile(const vector<vector<double>>& v, const int& n);
	void  ErrorChk(const string& s);
	
};
#endif

