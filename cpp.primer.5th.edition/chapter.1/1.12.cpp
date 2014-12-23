#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	//What does the following code, and do what is the sum?
	int sum = 0;
	for(int i = -100;  i <= 100; ++i)
		sum +=i;

	cout << sum << "\n";

	system("pause");
	return 0;
}

//Answer
//It runs a loop from -100 to 100 adding i to the sum each iteration. The sum = 0
	
