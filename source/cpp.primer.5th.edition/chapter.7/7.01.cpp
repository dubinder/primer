//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//* __1:__ Write a version of the transaction-processin program from (p. 24),
// using the Sales_data class you defined for the exercises (p.72).
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#include <iostream>
#include "Sales_data.h"

int main(int argc, char const *argv[])
{

  Sales_data data1;
  Sales_data data2;
  double price;
  price = 0;
  
  std::cin >> data1.bookNO >> data1.units_sold >> price;
  data1.revenue = data1.units_sold * price;
  std::cin >> data2.bookNO >> data2.units_sold >> price;
  data2.revenue = data2.units_sold * price;
  
  if(data1.bookNO == data2.bookNO)
  {
    unsigned totalCnt = data1.units_sold + data2.units_sold;
    double totalRevenue = data1.revenue + data2.revenue;
    std::cout << data1.bookNO << " " << totalCnt << " " << totalRevenue << " ";
    if(totalCnt != 0)
      std::cout << totalRevenue/totalCnt << std::endl;
    else
      std::cout << "(no sales)" << std::endl;
  }
  else
  {
    std::cerr << "Data must refer to the same ISBN" << std::endl;
    return -1;
  }

  return 0;
}//end int main(int argc, char const *argv[])

	

