/****
* 2.29 (Table) Using the techniques of this chapter, write a program that calculates the squares and
* cubes of the integers from 0 to 10. Use tabs to print the following neatly formatted table of values:
*
*
* integer square cube
* 0		0		0
* 1 	1		1
* 2 	4		8
* 3 	9		27
* 4 	16 		64
* 5		25 		125
* 6 	36 		216
* 7 	49		343
* 8 	64 		512
* 9 	81 		729
* 10 	100 	1000
****************************/


#include <iostream>

using namespace std;

int main(){

	int i, sq2, sq3;

	cout << "integer " << "square " << "cube\n";
	for(i = 0; i <= 10; i++)
	{
		cout << i << "\t" << i * i << "\t" << i*i*i << endl;

	}




	system("pause");
	return 0;
}//end main