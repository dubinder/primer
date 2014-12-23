#include <iostream>

using namespace std;

int main(){
	int num1, num2, sum, product, difference, quotient;


	cout << "Please enter two numbers\n"; 
	cin >> num1;
	cin >> num2;
	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;
	quotient = num1/num2;
	cout << "Sum = " << sum << endl;
	cout << "Product = " << product << endl;
	cout << "Difference = " << difference << endl;
	cout << "Quotient = " << quotient << endl;


	

	system("pause");
	return 0;
}//end main