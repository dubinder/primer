/******************************
* 2.28 (Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer
* into its digits and prints them separated by three spaces each. [Hint: Use the integer division and
* modulus operators.] For example, if the user types in 42339, the program should print:
* 4   2   3   3   9
* Dylan Binder
*
*
*
*
*
************************/

#include <iostream>

using namespace std;

int main(){

	int input;

	cin >> input;
	//lame way no error checking.
	cout << input / 10000 << "   " << (input / 1000) % 10 << "   " << (input / 100) % 10 << "   " << (input / 10) % 10 << "   " << input % 10 <<endl;

	




	system("pause");
		

 return 0;
}//end main