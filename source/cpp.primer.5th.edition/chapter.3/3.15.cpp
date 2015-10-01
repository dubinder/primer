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
* * __15:__ Write a program to read a sequence of strings from `cin` and store those values in a `vector`:
*/


int main(int argc, char const *argv[])
{
	string word;
	int i; 
	std::vector<string> v1;

	while (cin >> word )
	{	
		v1.push_back(word);
		if(word == "EOF")
			break;
	}
	for( i = 0; i < v1.size(); ++i)
		cout << v1[i] << " ";

	cout << "Yeah vector\n";
	cin >> i;
	return 0;
}//End int main(int argc, char const *argv[])
