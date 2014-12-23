#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item total; //var to hold data for next transaction
	//read the first transaction and ensure that there are data to process
	if (std::cin >> total){
		Sales_item trans;

		while(std::cin >> trans){
			if (total.isbn()== trans.isbn())
				total += trans; 
			else{
				std::cout << total << std::endl;
				total = trans;
			}
		}//end while
		std::cout << total << std::endl;
	} else{
		std::cerr << "No data?!" << std::endl;
		return -1; //indicate failure
	}
    system("pause");
	return 0;
}//end main
