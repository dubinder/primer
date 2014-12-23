#include <iostream>

/* * __4:__ Write a function that interacts with the user, asking for a number and generating
*  the factorial of that number. Call this funciton from `main`.
*/

void fact()
{

  int g_intIn = 0;
  int g_intOut = 1;
  int temp = 0;
  std::cout << "Please enter a number\n";
  std::cin >> g_intIn;
  std::cout << g_intIn;
  temp = g_intIn;

  while (temp > 1)
    g_intOut *= temp--;
  

  std::cout
    << "The factorial of "
    << g_intIn
    << " is "
    << g_intOut;
}


int main(int argc, char const *argv[])
{
  
  fact();
  system("pause");
  return 0;
}//end int main(int argc, char const *argv[])
