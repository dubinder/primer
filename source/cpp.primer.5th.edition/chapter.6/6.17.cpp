//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// * __17:__ Write a function to determine whether a string contains any capital letters. 
// Write a function to change a string to all lowercase. 
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::


#include <iostream>
#include <string>

bool determineLower(const std::string &rhs)
{
  char c;
  for (int i = 0; i < rhs.length(); ++i)
  {
    c = rhs[i];
    if (isupper(c))
      return false;
  }
  return true;
}

void lowerCase(std::string &lhs)
{
  char c;
  for (int i = 0; i < lhs.length(); ++i)
  {
    lhs[i] = tolower(lhs[i]);
  }
}


int main(int argc, char const *argv[])
{
  std::string str = "Test";
  std::string str2 = "test2";

  std::cout << determineLower(str) << std::endl;
  std::cout << determineLower(str2) << std::endl;
  lowerCase(str);
  std::cout << str << std::endl;

  return 0;
}//end int main(int argc, char const *argv[])
