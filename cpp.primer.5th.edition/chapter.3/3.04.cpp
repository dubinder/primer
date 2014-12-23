#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

/*
* Write a program to read two strings and report whether the strings are equal. If not report
* which of the two is larger. Now, change the program to report whether the strings have the same
* length, and if not, report which is longer. 
*/

int main(int argc, char const *argv[])
{
	string s1;
	string s2;

	cin >> s1 >> s2;

	if(s1 == s2)
		cout << s1 << " is equal to " << s2 << endl;
	else if (s1 < s2)
			cout << s2 << " is larger than " << s1 << endl;
		else
			cout << s1 << " is larger than " << s2 << endl;

	if(s1.size() == s2.size())
		cout << s1 << " is the same length as " << s2 << endl;
	else if(s1.size() < s2.size())
			cout << s2 << " is longer than " << s1 << endl;
		 else
			cout << s1 << " is longer than " << s2 << endl;
	cin >> s1;
	return 0;
}//End Main