#include <iostream>
#include <vector>
#include <string>

/*
* __20:__ Read a set of integers into a vector. 
* Print the sum of each pair of adjacent elements. 
* Change you program so that it prints the sum of the first and last elements, 
* followed by the sum of the second and second-to-last, and so on.7
*/

int main(int argc, char const *argv[])
{

	int g_numberIn;
	int g_count;
	int g_sum;
	std::vector<int> v1;
	g_sum = 0;
	g_count = 0;
	while(std::cin >> g_numberIn)
	{
		v1.push_back(g_numberIn);
		if(g_numberIn == 0)
			break;

	}
	for(int i = 0; i < v1.size(); ++i)
	{

		++g_count;
		g_sum += v1[i];

		if(!(g_count % 2))
		{
			std::cout << g_sum << std::endl;
			g_sum = 0;
		}
	}	

	/* code */
	return 0;
}//End int main(int argc, char const *argv[])
