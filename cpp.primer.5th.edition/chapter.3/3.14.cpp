#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

/*
* * __14:__ Write a program to read a sequence of ints from `cin` and store those values in a `vector`:
*/


int main(int argc, char const *argv[])
{
	int i;
	std::vector<int> v1;

	while (cin >> i )
	{	
		v1.push_back(i);
		if(!i)
			break;
	}
	for(i = 0; i < v1.size(); ++i)
		cout << v1[i] << " ";

	cout << "Yeah vector\n";
	cin >> i;
	return 0;
}//End int main(int argc, char const *argv[])
