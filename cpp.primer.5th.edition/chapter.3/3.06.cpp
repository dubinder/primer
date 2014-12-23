#include <iostream>
#include <string>
#include <cctype>

using std::endl;
using std::string;
using std::cin;
using std::cout;

int main(int argc, char const *argv[])
{
	//range "for's" are not in vs2010
 	string str("some string");
	char c;
	c = 'X';
	for (int i = 0; i < str.length(); ++i) 
	{	
		str[i] = c;
		cout << str[i] << endl;
	}

	return 0;
}//End main