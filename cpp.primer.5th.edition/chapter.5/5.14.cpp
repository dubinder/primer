#include <iostream>
#include <string>

/* __14:__ Write a program to read strings from standard input looking for duplicated words.
* The program should find places in the input where one word is followed immediately by itself.
* Keep track of the largest number of times a single repetition occurs and which word is
* repeated or else Print a message saying that no word was repeated.
*  For example, if the input is how now now now brown cow cow the output should
* indicate the word now occurred three times.
*/
typedef unsigned int uint;

int main(int argc, char const *argv[])
{


	uint g_maxDupCount = 1;
	std::string g_maxDupWord;

	uint g_runningDupCount = 1;
	std::string g_previousWord;

	std::string g_inWord;
	while (std::cin >> g_inWord)
	{
		if (g_inWord == "EOF")
			break;
		if (g_inWord == g_previousWord)
		{
			++g_runningDupCount;
		}
		else
		{
			if (g_runningDupCount > g_maxDupCount)
			{

				g_maxDupCount = g_runningDupCount;
				g_maxDupWord = g_previousWord;
			}

			g_runningDupCount = 1;
			g_previousWord = g_inWord;
		}
	}

	if (g_maxDupCount > 1)
	{
		std::cout << "word '" << g_maxDupWord << "' was repeated "
			<< g_maxDupCount << " times.\n";
	}
	else std::cout << "no word was repeated.\n";

	system("pause");
	return 0;
}//end int main(int argc, char const *argv[])

