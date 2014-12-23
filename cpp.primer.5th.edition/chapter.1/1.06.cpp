#include <iostream>

using namespace std;

int main(int arvgv, char * argv[]){


	cout << "Enter two numbers:" << "\n";
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	std::cout << "The sum " << v1;
			  << " and " << v2;
			  << " is " << v1 + v2 << std::endl;


	system("pause");
	return 0;
}//end main

//1.6 solved.  
// It is not legal.  The compiler is looking for the command prior to the operand to be executed properly. 