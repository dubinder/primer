#include <iostream>
#include <string>
#include <cctype>


using std::endl;
using std::string;
using std::cout;
using std::cin;

int main(int argc, char const *argv[])
{

	string instring;
	cout << "Please enter a word with punctuation.\n";
	
	cin >> instring;
	for(int i = 0; i < instring.length(); ++i)
		if(!ispunct(instring[i]))
			cout << instring[i];	

	/* code */
	cin >> instring;
	return 0;
}