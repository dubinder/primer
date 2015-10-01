#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Sales_item item1;

	cout << "Please enter the isbn, number of copies and how much the book costs\n";
	cin >> item1;
	cout << item1 << "\n";

    system("pause");
	return 0;
}


