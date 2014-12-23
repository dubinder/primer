//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include <iostream>



size_t count_calls()
{
  static size_t ctr = 0;
  if (ctr == 0)
    ;
    //return ctr;

  return ++ctr;
}

int main(int argc, char const *argv[])
{

  for (size_t i = 0; i != 10; ++i)
    std::cout << count_calls() << std::endl;
  system("pause");
  return 0;
}//end int main(int argc, char const *argv[])
	
