#include <iostream>
#include <vector>

/* __36:__ Write a program to compare two arrays for equality. Write a similar program to compare two vectors. */

int main(int argc, char const *argv[])
{
	int g_anArray[10];
	int g_anArrayTwo[10];
	int g_endInt;

		for (int i = 0; i < 10; ++i)
		{
			if (g_anArray[i] != g_anArrayTwo[i])
				break;
			else
				std::cout << "they match" << std::endl;

		}

	std::vector<int> v1;
	std::vector<int> v2;
	
	if (v1 == v2)
		std::cout << "the vectors are the same" << std::endl;
	else
		std::cout << "nope\n";

	
	std::cin >> g_endInt;
	return 0;
}//end int main(int argc, char const *argv[])


