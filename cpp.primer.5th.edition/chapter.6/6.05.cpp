#include <iostream>
#include <cmath>

/* __5:__ Write a fucntion to  return the absolute value of its argument.*/

int absolute(int a)
{
  return abs(a);
}

int main(int argc, char const *argv[])
{

  int i = 0;
  int temp = 0;
  std::cout << "Please enter a number\n";
  std::cin >> i;

  temp = absolute(i);
  std::cout
    << "The absolute number of "
    << i
    << " is "
    << temp;

  system("pause");

  return 0;
}//end int main(int argc, char const *argv[])
