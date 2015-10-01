//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// 21: Write a function that takes an int and a pointer to an int and returns
// the larger of the int value or the value to which the pointer points. 
// What type should you use for the pointer?
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#include <iostream>

int isBigger(const int i, const int *pi)
{
	if(i > *pi)
		return i;
	else
		return *pi;
}

int main(int argc, char const *argv[])
{
	int i = 11;
	int t = 10;
	int test;
	int *pi = &t;

	test = isBigger(i, pi);
	std::cout << test << std::endl;
	return 0;
}//end int main(int argc, char const *argv[])
