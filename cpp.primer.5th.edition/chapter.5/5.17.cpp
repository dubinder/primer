#include <iostream>
#include <vector>

/* __17:__ Given two vectors of ints, write a program to determine whether one vector
* is a prefix of the other. For vectors of unequal length, compare the number of
* elements of the smaller vector. For example, given the
* vectors containing 0, 1,1, and 2 and 0,1,1,2,3,5,8,
* respectively your program should return true.
*/

int main(int argc, char const *argv[])
{
	int g_endInt;
	std::vector<int> g_v1;
	std::vector<int> g_v2;
	bool prefixed = false;

	g_v1 = {0, 1, 1, 2 }; 
	g_v2 = { 0, 1, 1, 2, 3, 5, 8 };

	if (g_v2 == g_v1)
		prefixed = true;
	if (g_v2 < g_v1)//vector 2 is smaller
	{
		//compare values for the length of the shorter vector. 
		std::vector<int>::iterator g_v1It;
		std::vector<int>::iterator g_v2It;

		for (g_v1It = g_v1.begin(), g_v2It = g_v2.begin(); g_v2It != g_v2.end(); ++g_v2It, ++g_v1It)
			prefixed = *g_v1It == *g_v2It ? true : false;

	}
	else//(vector 1 is smaller)
	{
		std::vector<int>::iterator g_v1It;
		std::vector<int>::iterator g_v2It;

		for (g_v1It = g_v1.begin(), g_v2It = g_v2.begin(); g_v1It != g_v1.end(); ++g_v2It, ++g_v1It)
			prefixed = *g_v1It == *g_v2It ? true : false;
	}
	
	
	std::cout << prefixed;
	std::cin >> g_endInt;//end int to halt the execution for test purposes. 
	return 0;
}//end int main(int argc, char const *argv[])

