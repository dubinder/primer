/***************************************************
* Functions.h a header file for functions to be used
*	in driver programs later in chapeter 4.
*
*
*
****************************************************/

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int MonthToNumber(string inMonth);
string NumberToMonth(int numMonth);
string ToUpper(string inString);
string ToLower(string inString);
string replaceAll(string inString, string subString, string newSubstring);
string nameFormat(string fName, string mName, string lName);
string name(string name);
bool palindrome(string inString);

/**********************************
*Function: MonthToNumber: takes a month and returns a coresponding number
*
*Input: a Sting of a month;
*Output: an Int of the corresponding month
*
*********************************/
int MonthToNumber(string inMonth)
{
	
	int monthNumber = 4;
	string month;
	month = ToUpper(inMonth);
	if ((month == "JANUARY") == 1)
		monthNumber = 1;
	if((month == "FEBRUARY") == 1)
		monthNumber = 2;
	if((month == "MARCH") == 1)
		monthNumber = 3;
	if((month == "APRIL") == 1)
		monthNumber = 4;
	if((month == "MAY") == 1)
		monthNumber = 5;
	if((month == "JUNE") == 1)
		monthNumber = 6;
	if((month == "JULY") == 1)
		monthNumber = 7;
	if((month == "AUGUST") == 1)
		monthNumber = 8;
	if((month == "SEPTEMBER") == 1)
		monthNumber = 9;
	if((month == "OCTOBER") == 1)
		monthNumber = 10;
	if((month == "NOVEMBER") ==1)
		monthNumber = 11;
	if((month == "DECEMBER") == 1)
		monthNumber =12;

	return monthNumber;
}
/*******************
*Function:NumberToMonth: Takes an int an converts it to the appropiate month.
*
*Input: and int 1->12
*Ouput: a string in the corresponding Month
*********************************/
string NumberToMonth(int numMonth)
{
	if (numMonth < 1 || numMonth > 12)
		return   "Sorry not a correct Month number";
	if(numMonth == 1)
		return "January";
	if(numMonth == 2)
		return "February";
	if(numMonth == 3)
		return "March";
	if(numMonth == 4)
		return "April";
	if(numMonth == 5)
		return "May";
	if(numMonth == 6)
		return "June";
	if(numMonth == 7)
		return "July";
	if(numMonth == 8)
		return "August";
	if(numMonth == 9)
		return "September";
	if(numMonth == 10)
		return "October";
	if(numMonth == 11)
		return "November";
	if(numMonth == 12)
		return "December";

}

/*****************************
*Function:ToUpper: takes a string and converts it to all Upper Case and returns it
*
*Input: a String no Case preference
*OutPut: a String in all UPPERCASE
******************************/
string ToUpper(string inString)
{
	
	std::transform(inString.begin(), inString.end(), inString.begin(), ::toupper);


	return inString;

}
/********************************
*Funtion: ToLower: takes a string and converts it to all Lower Case and returns it
*
*Input: a String not case preference
*Output: a String in all lowercase
********************************/
string ToLower(string inString)
{
	std::transform(inString.begin(), inString.end(), inString.begin(), ::tolower);
	return inString;
}

/********************************
*Function: replaceAll: takes a string a substring and new substring and replaces substring with new substring and returns the new string.
*
*Input: a String, a substring and a new substring.
*Output: a String with the substring replaces by the new substring.
*********************************/
string replaceAll(string inString, string subString, string newSubstring)
{
	int position = -1;
	string tmp = inString;

	for(;;)
	{
		position = inString.find(subString, position+1);
		if (position == string::npos) break;
	
		tmp.replace(position, subString.size(), newSubstring);
		
	}
	
	if(position == string::npos && (tmp == inString) == 1 )
		cerr << subString << " does not occur with in " << inString +"\n";
	
	
	return tmp;
}

/**********************************************
*Function: nameFormat takes a name and returns the formatted name
*
*Input: 3 strings first middle and last name
*Output: 1 string formated
*
***********************************************/
string nameFormat(string fName, string mName, string lName)
{
	string name;
		
	name = lName + ", " + fName + " " + mName + ".\n"; 
	 
	return name;
}

/************************************
*Function: name takes a single string and parses out first last and middle name.
*
*Input: name a single string containing a name;
*Output: a single parsed out name
***************************************/
string name(string name)
{
	int length = name.size();
	string fName, lName, mName;

	fName = name.substr(0, name.find(" "));
	name = name.substr(name.find(" ") +1, length - fName.size());
	mName = name.substr(0, name.find(" "));
	lName = name.substr(name.rfind(" ") + 1 , length - name.rfind(" ") + 1);
	name = lName + ", " + fName + " " + mName +".\n";
	return name;
}

/********************************************
*Function: palindrome, takes a string and returns true if the string is a palindrome false other wise
*
*Input: a string,
*Output: True if  the string is a palindrome, false otherswise.
********************************************/
bool palindrome(string inString)
{

	string tmp;
	tmp = ToUpper(inString);
	inString = tmp;

	for(int i = inString.size()-1; i >= 0; i--)
		tmp[inString.size() -1 - i] = inString[i];

	if ((tmp == inString) == 1)
		return true;
	else 
		return false;



}

/******************************************************************************
*Function: stringCount, counts occurences of a string in another string.
*
*Input: Two Strings. The string being counted, and the string that the first string is being counted in.
*Output: Returns an Int the number of times the string was counted.
****************************************************************************/
int stringCount(string toLookFor, string beingChecked)
{

	int i = 0; //The number of occurences that are found




	return i;
}