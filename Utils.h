#ifndef UTILS_HPP
#define UTILS_HPP
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
using std::string;
using std::vector;
using std::cout;
using std::setw;
using std::cerr;
using std::string;
using std::ifstream;
using std::stringstream;
using UINT = std::size_t;
using  DBL = double;
using V1DI = vector<int>;
using V1DD = vector<double>;
using V2DI = vector<vector<int>>;
using V2DF = vector<vector<float>>;
using  V2DD = vector<vector<double>>;
using V1DS = vector<string>;

class Utils
{
public:
	//Employ  constructors,destructors,copy constructors and operaotrs
	
	Utils() = default;
	virtual ~Utils() noexcept = default;
	Utils(const Utils& source) = default;
	Utils& operator=(const Utils& source) = default;
	static void PrintResult(const vector<double>& v,const int&p, const int& width);
	static void PrintFile(const vector<vector<double>>& v,const V1DS& s , const int& n);
	static void  ErrorChk(const string& s);
	
};
#endif

