#include"Dictionary.h"
#include<fstream>
#include<string>
#include<sstream>

int main()
{
	std::ifstream ifs("treeNode1.txt");
	char str[100];	IceCola::Dict<std::string, std::string> doc;
	while (ifs.getline(str,100))
	{
		ifs.getline(str,100);
		std::stringstream ss(str);
		std::string key, value;
		ss >> key >> value;
		doc.Add(key, value);
	}
	std::string tmp;
	std::cout << "enter the word you are looking for:\n";
	std::cin >> tmp;
	while (strcmp(tmp.c_str(), "0") != 0)
	{
		std::cout << doc.find(tmp);
		std::cout << "\nenter the word you are looking for or 0 to exit:\n";
		std::cin >> tmp;
	}
	return 0;
}
