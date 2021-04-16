#include "Import.h"

V2DD Import::GetData(const string& filename)
{
	int row = 0, columns = 0;
	string line, tmp;
	stringstream ss;
	ifstream file(filename);
	getline(file, line);
	ss.clear();
	ss << line;
	while (ss >> tmp)
		columns++;
	V2DD  data;
	V1DD v(columns);
	if(file.is_open())
	{
		while(file.good())
		{
			data.push_back(v);
			for(int column = 0; column < columns;column++)
			{
				file >> data[row][column];
			}
			row++;
		}
		data.pop_back();
		std::cout << "\n File: " << filename << "\n";
		std::cout << " Imported " << (data.size() * columns - 1) << " values sucessfully";
		file.close();
	}
	else
	{
		Utils::ErrorChk("Unable to load files");
	}
	

	return data;


	
}
