#include <iostream>
#include <vector>
#include <cctype>
#include <string>

int main(int argc, char const *argv[])
{
	int theEnd;
	
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);

	std::cout << "vector 1: " << "size: " << v1.size() << " \n";
	std::cout << "vector 2: " << "size: " << v2.size() << " \n";
	std::cout << "vector 3: " << "size: " << v3.size() << " \n";


	for(std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
	{
		//if(v1.empty())
		std::cout << "Vector 1: " << *it << std::endl;
	}
	for(std::vector<int>::iterator it = v2.begin(); it != v2.end(); ++it)
	{
		//if(v2.empty())
		std::cout << "Vector 2: " << *it << std::endl;
	}
	for(std::vector<int>::iterator it = v3.begin(); it != v3.end(); ++it)
		std::cout << "Vector 3: " << *it << std::endl;

	std::cout << "Yeah vector\n";
	std::cin >> theEnd;
	return 0;
}//End main