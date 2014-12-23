/* farmer.cpp Displays the lyrics for "The Farmer in the Dell"
*  using a funtion PrintVerse()
*
*Input none
*Output: Lyrics for "The Farmer in the Dell"
***********************************************************************/

#include <iostream>				//cin, cout, >>, <<
#include <string>				//string
using namespace std;

void PrintVerse(string restOfLine);   //function prototype

int main()
{
	string name;

	
	PrintVerse("farmer in the dell");
	PrintVerse("farmer takes a wife");
	PrintVerse("wife takes a child");
	PrintVerse("child takes a nurse");
	PrintVerse("nurse takes a cow");
	PrintVerse("cow takes a dog");
	PrintVerse("dog takes a cat");
	PrintVerse("cat takes a rat");
	PrintVerse("rat takes the cheese");
	PrintVerse("cheese stands alone");
	
	
	
	return 0;
}

/*****************************************************
*PrintVerse() prints one verse of the "The Farmer in the Dell".
*
*
*Receive: restOfLine, a string
*OutPut: a verse with restOfLine inserted appropriately. 
********************************************************/

void PrintVerse(string restOfLine)
{
	const string verse =
						"The " + restOfLine + "\n" +
						"The " + restOfLine + "\n" +
						"Hi-ho, the derry-o\n" +
						"The " + restOfLine + "\n\n";

	cout << verse;
}