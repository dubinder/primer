#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;


int main(int argc, char const *argv[])
{
	string s1;
	string concat;

	while(cin >> s1)
	{	
		if(s1 == "EOF")
			break;
		concat += s1;
		
	}
	cout << concat << endl;
	concat = "";
	s1 = "";
	while(cin >> s1)
	{	
		if(s1 == "EOF")
			break;
		concat = concat + s1 + " ";
		
	}
	cout << concat << endl;
		
	cin >> s1;

	return 0;
}//End Main