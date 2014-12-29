//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// * __23:__ Write your own versions of each print functions presented in this section. 
// Call each of these functions to print i, and j defined as follows
// int i = 0, j[2] = {0,1}
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#include <iostream>

void print(int(&arr)[10])
{
  for (int i = 0; i < 10; ++i)
  {
    std::cout << arr[i] << std::endl;
  }
}
void print(const char *cp)
{
  if (cp)
    while (*cp)
      std::cout << *cp++;
}
void print(const int *beg, const int *end)
{
  while (beg != end)
    std::cout << *beg++ << std::endl;
}
void print(const int ia[], size_t size)
{
  for (size_t i = 0; i != size; ++i)
    std::cout << ia[i] << std::endl;
}


int main(int argc, char const *argv[])
{
  int i = 0;
  int j[2] = { 0, 1 };
  
 

  print(std::begin(j), std::end(j));
  return 0;

}