#include <iostream>
#include "Sales_item.h";

using namespace std;

int main(int argc, char const *argv[])
{
	Sales_item item1;
	Sales_item item2;
	cout << "Please enter the isbn, number of copies, and how much the book costs\n";
	cin >> item1 >> item2;
	cout << "\n" << item1 + item2 << "\n";


	system("pause");
	return 0;
}//end int main(int argc, char const *argv[])
