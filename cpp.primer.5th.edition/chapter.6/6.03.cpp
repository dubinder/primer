#include <iostream>

/* __3:__ Write and test your own version of 'fact'.*/

int fact(int a)
{
	int i = a;
	int sum
	while(i > 1)
		sum *= --i; 

	return sum;
}

int main(int argc, char const *argv[])
{
	int g_intIn = 0;
	int g_intOut = 0;
	std::cout << "Please enter a number\n";
	std::cin >> g_intIn;

	g_intOut = fact(g_intIn);

	std::cout 
		<< "The factorial of "
		<< g_intIn 
		<< "is "
		<< g_intOut;

	return 0;
}//end int main(int argc, char const *argv[])
