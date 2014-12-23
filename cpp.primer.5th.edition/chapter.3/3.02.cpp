#include <iostream>
#include <string>


using std::cout;
using std::string;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	string line;

	while(getline(cin, line))
		cout << line << endl;


	return 0;
}//End main