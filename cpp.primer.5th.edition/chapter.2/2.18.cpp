/*
*  __18:__ Write code to change the value of a pointer.
* Write code to change the value to which the pointer points.
*/

#include <iostream>




int main(int argc, char const *argv[])
{
	int number_one;
	int number_two;
	int *d;
	number_one = 42;
	number_two = 100;

	d = &number_one;

	std::cout << "Address of  pointer: " << &d << std::endl;
	std::cout << "Value of int it points to(number_one): " << *d << std::endl;
	
	d = &number_two;
	std::cout << "Address of  pointer: " << &d << std::endl;
	std::cout << "Changing the value of the Pointer: " << std::endl;
	std::cout << "Value of int it points to(number_two): " << *d << std::endl;
	
	*d = 1009;
	std::cout << "Address of  pointer: " << &d << std::endl;
	std::cout << "Changing the value of the what the pointer points to: " << std::endl;
	std::cout << "Value of int it points to(number_two): " << *d << std::endl;

	cin >> number_two;
	return 0;
}//end main