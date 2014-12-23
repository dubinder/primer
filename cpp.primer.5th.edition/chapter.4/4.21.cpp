#include <iostream>
#include <vector>

/* __21:__ Write a program to use a conditional operator to find the elements in a vector<int>
* that have odd value and double the value of each such element. 
*/
int main(int argc, char const *argv[])
{
  int g_endInt;
  std::vector<int> g_v1;
  
  for(int i = 0; i < 100; ++i)
    g_v1.push_back(i);

  std::vector<int>::iterator g_vectorIt;

  for(g_vectorIt = g_v1.begin(); g_vectorIt != g_v1.end(); ++g_vectorIt)
  {
	
	*g_vectorIt % 2 == 0 ? 0 : *g_vectorIt *= 2;
		
	std::cout
	  << *g_vectorIt
	  << std::endl;
  }	
  
  std::cin >> g_endInt;
  return 0;
}//end int main(int argc, char const *argv[])
	
