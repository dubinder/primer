//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//* __7:__ Write a function that returns 0 when its is first called
//  and then generates numbers in a sequence each time it is called. 
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#include <iostream>



size_t count_calls()
{
  static size_t ctr = 0;
  return ctr++;
}

int main(int argc, char const *argv[])
{

  for (size_t i = 0; i != 10; ++i)
    std::cout << count_calls() << std::endl;
  system("pause");
  return 0;
}//end int main(int argc, char const *argv[])
	
