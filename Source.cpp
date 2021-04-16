#include "Import.h"
#include <Windows.h>
int main()
{
	SetConsoleTitle(L"Console Output");
	V2DD data;
	Import ctai;
	data = ctai.GetData("data.csv");
	V1DS  v;
	v.push_back("CTA");
	cout << "\n Printing first 18:\n";
	Utils::PrintFile(data, v, 18);
}