#include <iostream>
#include <string>
/* __19:__ Write a program that uses a do while loop to repetitively request two
* strings from the user and report which string is less than the other.
*/

int main(int argc, char const *argv[])
{
	std::string g_inStringOne = "";
	std::string g_inStringTwo = "";

	int g_testInt = 0;

	do{
		std::cout << "Please enter two words, EOF to quit\n";
		std::cin >> g_inStringOne >> g_inStringTwo;

		g_testInt = strcmp(g_inStringOne.c_str(), g_inStringTwo.c_str());

			if (!g_testInt)
				std::cout << "They are the same word\n";
			else if (g_testInt > 0)
				std::cout << "Word one is greater\n";
			else
			std::cout << "Word two is greater\n";
	} while (g_inStringOne != "EOF" || g_inStringTwo != "EOF");


	return 0;
}//end int main(int argc, char const *argv[])
