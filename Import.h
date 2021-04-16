#ifndef IMPORT_HPP
#define IMPORT_HPP

#include "Utils.h"
#include <string>
using std::string;
class Import
{
public:
	Import() = default;
	virtual ~Import() = default;
	V2DD GetData(const string& filename);	
};
#endif

