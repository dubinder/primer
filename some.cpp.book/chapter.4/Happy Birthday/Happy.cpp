/*********************************************
*Happy.cpp
*
*Input: Name
*Output: Happy Birthday song with Name
*
*********************************************/

/**************************************
* Expected Output
* Happy Birthday to You
* Happy Birthday to You
* Happy Birthday Dear (Name)
* Happy Birthday to You
****************************/


#include <iostream>     //cin cout <<, >>
#include <string>		//String manip
using namespace std;

void happy(string name);

int main()
{

	string name;
	cout << "What is your name?";
	cin >> name;

	happy(name);






	return 0;
}


/************************************
* Happy: takes a string name, sings happy birthday
*
*
*Input name, a string
*Output: the song Happy birthday
*************************************/

void happy(string name)
{

	cout << "Happy Birthday to You\n" 
		 << "Happy Birthday to You\n" 
		 << "Happy Birthday Dear " + name + "\n" 
		 << "Happy Birthday to You\n";




}