//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//* __3:__ Revise your transation - processing program to uses these members &7.1.1 (p(256))
//
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

  if (data1.isbn() == data2.isbn())
  {
    data1.combine(data2);
    std::cout << data1.bookNo << " " << data1.unitsSold << " " << data1.revenue << " ";
    if (data1.unitsSold != 0)
      std::cout << data1.avgPrice() << std::endl;
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