//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//* __55:__ Write four functions that add, subtract, and multiply and divide two int values.
//Store pointers to these functions in your vector from the previous exercise.
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include <iostream>
#include <vector>

int add(int &i, int &j)
{
	return i + j;
}

int subtract(int &i, int &j)
{
	return i - j;
}

int multiply(int &i, int &j)
{
	return i * j;
}

int divide(int &i, int &j)
{
	return i / j;
}

typedef int (*pf)(int &i, int&j);
int main(int argc, char const *argv[])
{
  std::vector<pf> v;
  pf f1, f2, f3, f4;
  f1 = add;
  f2 = subtract;
  f3 = multiply;
  f4 = divide;

  v.push_back(f1);
  v.push_back(f2);
  v.push_back(f3);
  v.push_back(f4);

  return 0;
}//end int main(int argc, char const *argv[])
