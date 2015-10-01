#include <iostream>

/*
* 35: Determine the types deduced in each of the following definitions. 
* Once You've figured out the types write a program to see whether you were correct. 
*/


int main(int argc, char const *argv[])
{
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	//i is a const int, 
	//j is an int
	//k is a const int reference
	//p is const int pointer 
	//j2 is a const int 
	//k2 is a const int reference

	
	return 0;
}//End Main