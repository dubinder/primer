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

  SalesData data1;
  SalesData data2;
  double price;
  price = 0;
  
  std::cin >> data1.bookNo >> data1.unitsSold >> price;
  data1.revenue = data1.unitsSold * price;
  std::cin >> data2.bookNo >> data2.unitsSold >> price;
  data2.revenue = data2.unitsSold * price;
  
  if(data1.bookNo == data2.bookNo)
  {
    unsigned totalCnt = data1.unitsSold + data2.unitsSold;
    double totalRevenue = data1.revenue + data2.revenue;
    std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
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
