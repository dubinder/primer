/**************
*Dice.cpp simulates a given number of pairs of dice rolls,
*and counts the number of times a specified number occurs
*
*Input: number of dice rolls, the number to be counted, 
*		 and user's response to "More Rolls?" query
*Output: user promts and the relative frequncy of the number of spots
*
***********************************************************/

#include "RandomInt.h"				//the type RandomInt
#include <iostream>					//cin cout, <<, >>
using namespace std;

int main()
{
	int numRolls;	//number of rolls of the dice
	int pair, numberOfSpots, occurrences;

	RandomInt die1(1, 6),		//the first Die
			  die2(1, 6);		//the second Die

	cout << "This program simulates a given number of dice-pair rolls,\n"
		 << "counting the number of times a given roll occurs.\n";
	
	cout << "\nHow many times are the dice to be rolled? ";
	cin >> numRolls;

	for(;;)
	{
		cout << "Enter number of spots to count (2-12, 0 to stop); ";
		cin >> numberOfSpots;
		
		if (numberOfSpots <= 0) break;	//terminate input lood

		occurrences = 0;

		for (int rollCount = 1; rollCount <= numRolls; rollCount++)
		{
			pair = die1.generate() + die2.generate();

			if(pair == numberOfSpots)
				occurrences++;
		
		
		}

		cout << "The relative frequency of " << numberOfSpots
		 << " was " << double(occurrences) / double(numRolls)
		 << "\n\n";
	}
}
	
	