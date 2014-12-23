#include <iostream>
#include <vector>

/* __32:__ Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.*/

int main(int argc, char const *argv[])
{
	int g_myArray[10];
	int g_endInt;
	int g_myArrayTwo[10];
	for(int i = 0; i < 10; ++i){
		g_myArray[i] = i;
		std::cout << g_myArray[i] << std::endl;
	}

	for(int i = 0; i != 10; ++i)
	{
		g_myArrayTwo[i] = g_myArray[i];
		std::cout << g_myArrayTwo[i] << std::endl;
	}

	std::vector<int> v1(10,0);
	std::vector<int> v2(10,0);

	std::vector<int>::iterator itv1;
	std::vector<int>::iterator itv2;

	for(itv1 = v1.begin(); itv1 != v1.end(); ++itv1)
	{
		*itv1 += 1;
		std::cout << *itv1 << std::endl;
	}
	std::cout << "end vector 1" << std::endl;

	v2 = v1;
	for(itv2 = v1.begin(); itv2 != v1.end(); ++itv2)
		std::cout << *itv2 << std::endl;
	
	std::cin >> g_endInt;

	return 0;
}//end int main(int argc, char const *argv[])
