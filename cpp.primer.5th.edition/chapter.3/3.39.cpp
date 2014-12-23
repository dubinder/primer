#include <iostream>
#include <string>

/* __39:__ Write a program to compare two strings. Now Write a program to compare the values of two C-Style strings.*/

int main(int argc, char const *argv[])
{
	std::string g_one = "Uno";
	std::string g_two = "Uno";

	int g_endInt;
	if (g_one == g_two)
		std::cout << "They match";

	//c string
	if(strcmp(g_one.c_str(), g_two.c_str()))
		std::cout << "they Don't match 1";

	std::cin >> g_endInt;
	return 0;
}//end int main(int argc, char const *argv[])

