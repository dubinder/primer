#include <iostream>

/* __35:__ Using pointers, write a program to set the elements in an array to zero. */

int main(int argc, char const *argv[])
{

	int g_anArray[10];
	int *b = g_anArray;
	int *e =  &g_anArray[10];
	int g_cinEnd;

	for( *b; b != e; ++b)
	{
		*b = 0;
		std::cout << *b << " Index " << b << std::endl;
	}

	std::cin >> g_cinEnd;
	return 0;
}//end int main(int argc, char const *argv[])

	
