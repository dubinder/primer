//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//* __54:__ Write a declaration for a function that takes two int parameters and returns an int,
// and declare a vector whose elements have this function type.
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include <iostream>
#include <vector>

int f(int i, int j);
typedef int(*pf)(int i, int j);

int main(int argc, char const *argv[])
{
  std::vector<pf> v;

  return 0;
}//end int main(int argc, char const *argv[])
