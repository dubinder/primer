//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//* __33:__ Write a recursive function to print the contents of a vector
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include <vector>
#include <iostream>

int printVector(const std::vector<int> &v, int index)
{
  
  if (index >= 0)
  {
    std::cout << v[index] << std::endl;
#ifndef NDEBUG
    std::cerr << __LINE__ << std::endl;
#endif
    return printVector(v, index - 1);
  }
  return 1;
}

int main(int argc, char const *argv[])
{
  std::vector<int> v1 = { 1, 2, 3, 4 };
  printVector(v1, v1.size() - 1);
  
	return 0;
}//end int main(int argc, char const *argv[])

