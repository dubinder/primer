#include <iostream>

using namespace std;



//rewrite 1.9 and 1.10 using for loops. 


int main(int argc, char const *argv[])
{
	int sum = 0;

	//1.9 A loop that sums the numbers 1 to 100

	for(int i = 0; i <= 100; i++)
		sum += i;


	cout << sum<< "\n";
	//1.10
	//write a for loop that decrements and prints 10 to zero
	for(int i = 10; i >= 0; i--)
		cout << i << "\n";


	system("pause");
	return 0;
}
