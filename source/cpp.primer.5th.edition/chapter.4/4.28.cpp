#include <iostream>

/* __28:__ Write a program to print the size of each of the built-in types.*/

int main(int argc, char const *argv[])
{

	std::cout
		<< "Size of char = " << sizeof(char) << " \n"
		<< "Size of int = " << sizeof(int) << " \n"
		<< "Size of short int = " << sizeof(short int) << " \n"
		<< "Size of long int = " << sizeof(long int) << " \n"
		<< "Size of float = " << sizeof(float) << " \n"
		<< "Size of double = " << sizeof(double) << " \n"
		<< "Size of wchar_t: = " << sizeof(wchar_t) << " \n";


	system("pause");
	return 0;
}//end int main(int argc, char const *argv[])

