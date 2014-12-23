/***************************************
* simulates the processing of a phone number by the telephone company
*
*
*Input: phoneNumber.
*Output: areaCode, exhchange and localNumber
*******************************************/

#include <iostream>            //cin, cout, <<, >>
#include <string>				//string
#include <cstdlib>				//exit()
#include <stdlib.h>				
using namespace std;

//Function prototypes
void CheckValidity(string aString);
void PhoneError(string message);

int main()
{
	const string PROMPT = "\nEnter a phone number: ";
	cout << PROMPT;

	string phoneNumber;
	cin >> phoneNumber;

	CheckValidity(phoneNumber);

	if (phoneNumber[0] == '1')
		cout << '(' << phoneNumber.substr(1,3) << ")-"
			 << phoneNumber.substr(4,3) << '-'
			 << phoneNumber.substr(7,4) << endl;
	else
		cout << phoneNumber.substr(0,3) << '-'
			 << phoneNumber.substr(3,4) << endl;



}

/****************************
*CheckValidity ensures that a string is a valid phone number
*
*Recieve: aString, a string
*Return: nothing if aString is valid Terminate otherwise
************************************/

void CheckValidity(string aString)
{
	if (aString.size() != 7 && aString.size() != 11)
		PhoneError("A phone number has 7 or 11 characters");
	else
	{
		if(aString.size() == 7 && (aString[0] == '0' || aString[0] == '1'))
			PhoneError("A local call cannot begin with a 0 or 1");
		else if(aString.size() == 11 && aString[0] != '1')
			PhoneError("A long distance call must begin with a 1");
		if(aString.find_first_not_of("0123456789", 0) != string::npos)
			PhoneError("A phone number must consist of all digits");
	}


}
/**********************************
*PhoneError displays an error msg and terminates the program
*
*Receive: message, a string
*Output: message, with phone-specific text
*Postcondition: Program has been terminated
*******************************/

void PhoneError(string message)
{

	cerr << "Your call cannot be completed because:\n"
		 << message << ".\nPlease try again." << endl;
	exit(1);

}