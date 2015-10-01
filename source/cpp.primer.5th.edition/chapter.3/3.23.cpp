#include <iostream>
#include <vector>
#include <string>

/*
* __23:__ Write a program to create a vector with ten int elements.
* Using an iterator, adding each element a value that is twice its current
* value. Test your program by printing the vector. 
*/

int main(int argc, char const *argv[])
{
	int endIn;
	std::vector<int> v;

	for(int i = 0; i != 10; ++i)
		v.push_back(i);

	std::vector<int>::iterator it;

	for(it = v.begin(); it != v.end(); ++it)
	{
		*it = *it + (*it * 2);
		std::cout << *it << std::endl;
	}

	std::cin >> endIn;
	return 0;
}//end int main(int argc, char const *argv[])
