#include <iostream>

/* __4:__ Parenthesize the following expression to show how it is evaluated. 
* Test you answer by compiling the expression (without parentheses) and printing its result. 
*	12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
*/

int main(int argc, char const *argv[])
{
	int g_endInt;
	std::cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;
	// 16 + 75 + 0
	std::cin >> g_endInt;
	return 0;
}//end int main(int argc, char const *argv[])
