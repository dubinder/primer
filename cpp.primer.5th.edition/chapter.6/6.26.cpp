//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// * __26:__ Write a program that accepts the options presented in this section.
// Print the values of the arguments passed to main. 
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

  std::string one = "";
  for (int i = 0; i < argc; ++i)
  {
    one = argv[i];
    std::cout << one << std::endl;
  }
  

	return 0;	
}//end int main(int argc, char const *argv[])
