#include <iostream>
#include <string>

struct Sales_data{

	std::string bookNO;
	unsigned units_sold = 0;
	double revenue = 0.0;

};

int main(int argc, char const *argv[])
{
	
	Sales_data data1;
	Sales_data data2;
	double price;
	price = 0;
	std::cin >> data1.bookNO >> data1.units_sold >> price
	data1.revenue = data1.units_sold * price;

	std::cin >> data2.bookNO >> data2.units_sold >> price
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
		return 0;


	}
	else
	{
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}

	return 0;
}//End Main