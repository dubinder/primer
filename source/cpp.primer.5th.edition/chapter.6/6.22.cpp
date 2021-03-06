//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//* __22:__ Write a function to swap two int pointers.
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include <iostream>

void pointerSwap(int **p1, int **p2)
{
	int *temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(int argc, char const *argv[])
{
	int *p1;
	int *p2;
  int i = 9;
	int j = 10;
	p1 = &i;
	p2 = &j;

	pointerSwap(&p1, &p2);

	std::cout << *p1 << *p2 << std::endl;
	return 0;
}//end int main(int argc, char const *argv[])
