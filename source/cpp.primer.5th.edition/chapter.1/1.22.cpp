#include <iostream>
#include "Sales_item.h"


using namespace std;

int main(int argc, char const *argv[])
{
	Sales_item trans;
	Sales_item sum;
	while(cin >> trans){
		sum += trans;

	}

	cout << sum << "\n";

	system("pause");
	return 0;
}//end int main(int argc, char const *argv[])


