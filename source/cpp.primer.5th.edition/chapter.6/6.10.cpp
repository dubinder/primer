//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// * __10:__ Using pointers, write a function to swap the values of two ints. 
// Test the function by calling it and printing the swapped values.
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include <iostream>

void swapPointers(int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

int main(int argc, char const *argv[])
{
	int * a;
	int * b;
	int one = 1;
	int two = 2;

	a = &one;
	b = &two;
	swapPointers(a, b);
	std::cout << *a << *b << std::endl;

	system("pause");
	return 0;
}//end int main(int argc, char const *argv[])
