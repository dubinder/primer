#include <iostream>

/* __31:__ Write a program to define an array of ten ints. Give each element the same value as its position in the array. */


int main(int argc, char const *argv[])
{
	int myArray[10];
	int endInt;
	for(int i = 0; i < 10; i++){
		myArray[i] = i;
		std::cout << myArray[i] << std::endl;
	}

	std::cin >> endInt;
	return 0;
}//end int main(int argc, char const *argv[])


