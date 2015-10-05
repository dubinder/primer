//Sales_data.h
#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct SalesData
{
  std::string isbn() const { return bookNo; }
  SalesData& combine(const SalesData& rhs);
  double avgPrice() const;

  std::string bookNo;
  unsigned unitsSold = 0;
  double revenue = 0.0;
};

SalesData& SalesData::combine(const SalesData& rhs)
{
  unitsSold += rhs.unitsSold;
  revenue += rhs.revenue;
  return *this;
}

double SalesData::avgPrice() const
{
  if (unitsSold)
    return revenue / unitsSold;
  else
    return 0;
}
#endif
