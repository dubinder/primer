//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// * __25:__ Write a main function  that takes two arguments.
// Concatenate the supplied arguments and print the resulting string. 
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

  std::string one = "";
  for (int i = 0; i < argc; ++i)
    one += argv[i];

  
  std::cout << one << std::endl;

	return 0;	
}//end int main(int argc, char const *argv[])
