#include <iostream>
#include <vector>


/* Redo this with Iterators. 
* __20:__ Read a set of integers into a vector. 
* Print the sum of each pair of adjacent elements. 
* Change you program so that g_it prints the sum of the first and last elements, 
* followed by the sum of the second and second-to-last, and so on.7
*/

int main(int argc, char const *argv[])
{
	int g_endInt;
	int g_inInt;
	int g_count;
	int g_sum;
	g_count = 0;
	g_sum = 0;
	std:std::vector<int> g_v1;

	//define end iterator
	std::vector<int>::iterator g_itEnd;
	//define being iterator
	std::vector<int>::iterator g_it;

	std::cout << "Please enter integers, 0 to quit\n";

	while(std::cin >> g_inInt)
	{	
		g_v1.push_back(g_inInt);
		if(g_inInt == 0)
			break;
	}
	
	//adjacent members
	for(g_it = g_v1.begin(); g_it != g_v1.end(); ++g_it)
	{
		++g_count;
		g_sum += *g_it;

		if(!(g_count % 2))
		{
			std::cout << g_sum << std::endl;
			g_sum = 0;
		}
	}
	
	g_itEnd = g_v1.end();
	//first + last, second + second to last 0 + (end - 1)
	for(g_it = g_v1.begin(); g_it != g_v1.end(); ++g_it)
	{
		--g_itEnd;
		g_sum = *g_it + *g_itEnd;
		if(*g_it != *g_itEnd)
			std::cout << g_sum << std::endl;
		g_sum = 0;
	}

	//print the vector
	for(g_it = g_v1.begin(); g_it != g_v1.end(); ++g_it)
	{
		std::cout << *g_it<< std::endl;
	}

	std::cin >> g_endInt;
	return 0;
}//end int main(int argc, char const *argv[])