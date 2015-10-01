#include <iostream>
#include <vector>


/* __41:__ Write a program to initialize a vector from an array of ints. */

int main(int argc, char const *argv[])
{
	int g_endInt;
	static const int arr[] = {1,2,3,4,5,6,7,8,9};
	std::vector<int> v(arr, arr + sizeof(arr)/sizeof(int));
	std::vector<int>::iterator it;

	for(it = v.begin(); it != v.end(); ++it)
	  std::cout << *it << std::endl;

	std::cin >> g_endInt;
	return 0;
}//end int main(int argc, char const *argv[])
