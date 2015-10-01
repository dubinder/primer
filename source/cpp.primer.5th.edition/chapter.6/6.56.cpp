//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//* __56:__ Call each element in the vector and print their result.
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
  int i;
  int j;
  i = 5;
  j = 5;
  pf f1, f2, f3, f4;
  f1 = add;
  f2 = subtract;
  f3 = multiply;
  f4 = divide;

  v.push_back(f1);
  v.push_back(f2);
  v.push_back(f3);
  v.push_back(f4);

  std::cout << "i: " << i << " j: " << j << std::endl;
  std::cout << "Add: " << v[0](i, j) << std::endl;
  std::cout << "Subtract: " << v[1](i, j) << std::endl;
  std::cout << "Multiply: " << v[2](i, j) << std::endl;
  std::cout << "Divide: " << v[3](i, j) << std::endl;

  return 0;
}//end int main(int argc, char const *argv[])
