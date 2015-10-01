#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(int argc, char const *argv[])
{

	int count1, count2, count3;
	count1 = count2 = count3 = 0;

	//for 3 items only. 
	Sales_item item1;
	Sales_item item2;
	Sales_item item3;
	Sales_item trans;
	
    //This does not work well.  Come back to it later. (maybe)
    cout << "Please enter a transaction\n";
	while(cin >> trans){
		
		
		if(trans.isbn() == item1.isbn()){
			++count1;
			cout << "Item 1 = " << item1 << " Number of times item 1 sold = " << count1 << "\n";
			cout << "Please enter another transaction\n";
        }
		else
        if(trans.isbn() == item2.isbn()){
			++count2;
			cout << "Item 2 = " << item1 << " Number of times item 2 sold = " << count2 << "\n";
			cout << "Please enter another transaction\n";
		}
		else
        if(trans.isbn() == item3.isbn()){
			++count3;
			cout << "Item 3 = " << item1 << " Number of times item 3 sold = " << count3 << "\n";
            cout << "Please enter another transaction\n";
		}
		else
			item1 = trans;
		 
	}

	system("pause");
	return 0;
}//end int main(int argc, char const *argv[])
