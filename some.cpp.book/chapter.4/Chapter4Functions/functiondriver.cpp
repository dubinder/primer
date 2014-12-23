/***********************************
* Driver program for function pratice
*
*
**********************************/

#include <iostream>
#include <string>
#include "Functions.h"
using namespace std;

int main()
{

	int num;
	num = 56;
	string test;
	bool fun;
	num = MonthToNumber("January");
	cout << num << "\n";
	num = MonthToNumber("FeBruarY");
	cout << num << "\n";
	num = MonthToNumber("march");
	cout << num << "\n";
	num = MonthToNumber("april");
	cout << num << "\n";
	num = MonthToNumber("may");
	cout << num << "\n";
	num = MonthToNumber("june");
	cout << num << "\n";
	num = MonthToNumber("july");
	cout << num << "\n";
	num = MonthToNumber("august");
	cout << num << "\n";
	num = MonthToNumber("september");
	cout << num << "\n";
	num = MonthToNumber("october");
	cout << num << "\n";
	num = MonthToNumber("november");
	cout << num << "\n";
	num = MonthToNumber("december");
	cout << num << "\n";
	for(int i =0; i < 14; i++)
		cout << NumberToMonth(i) + "\n";


	test = "test";
	test = ToUpper(test);
	cout << test + "\n" << ToLower(test) << "\n";

	test = "Holy shit balls";
	cout << test + "\n";
	test = replaceAll(test, "shit", "fuckING");
	cout << test + "\n";
	test = replaceAll(test, "omg", "fucking");
	cout << test + "\n";

	cout << nameFormat("Hugh", "G", "Wrection");
	cout << name("Hugh G Wrection");
	fun = palindrome("madam") ;
	if (fun == true)
		cout << "madam\n";
	cout << fun + "\n";
	cout << palindrome("suck it") + "\n";
}