#include <iostream>

/* __23:__ Write a program that reads two integers from the standard input and
* prints the result of dividing the first number by the second.
*/

int main(int argc, char const *argv[])
{
	int g_firstInt = 0;
	int g_secondInt = 0;

	std::cout << "Please enter to integers\n";
	std::cin >> g_firstInt >> g_secondInt;

	std::cout << (g_firstInt / g_secondInt) << std::endl;

	return 0;
}//end int main(int argc, char const *argv[])
