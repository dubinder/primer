#include <iostream>
#include <vector>

/* __42:__ Write a program to copy a vector of ints into an array of ints. */

int main(int argc, char const *argv[])
{
  int g_endInt;
  std::vector<int> v(10, 4);
  int arr[10];

  std::vector<int>::iterator it;

  for(int i = 0; i != 10; ++i)
  {
  	arr[i] = v[i];
  	std::cout << arr[i];
  }
  
  std::cin >> g_endInt;
  return 0;
}//end int main(int argc, char const *argv[])

	
	

