//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//* __51:__ Write all four versions of f. Each function should print a distinguishing message.
//  Check your answers for the previous exercise.
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#include <string>
#include <iostream>

void f()
{
  std::cout << "nothing";
}
void f(int)
{
  std::cout << "int";
}
void f(int, int)
{
  std::cout << "int, int";
}
void f(double, double)
{
  std::cout << "double, double";
}

int main(int argc, char const *argv[])
{
	f(2.56, 42); //amibigous
	f(42);//int
	f(42, 0);//int int
  f(2.56, 3.14);//double double
	return 0;
}//end int main(int argc, char const *argv[])
