#include <iostream>
#include <string>

/* __20:__ Write a program to read a sequence of strings from the standard input until either the same
* word occurs twice in succession or all the words have been read.
* Use a while loop to read the text one word at a time.
* Use the break statement to terminate the loop if a word occurs twice in succession.
* Print the word if it occurs twice in succession, or else print a message saying that
* no word was repeated.
*/

int main(int argc, char const *argv[])
{
	std::string g_lastWord = "";
	std::string g_currentWord = "";
	int g_testInt = 0;

	while (std::cin >> g_currentWord)
	{	//first pass no word before so compare
		g_testInt = strcmp(g_lastWord.c_str(), g_currentWord.c_str());
			if (!g_testInt)
			{
				std::cout << g_lastWord << " has be typed twice\n";
				break;
			}

			if (g_currentWord == "EOF")
				break;
			g_lastWord = g_currentWord;
	}

	if (g_testInt)
		std::cout << "No word has been typed twice\n";

	return 0;
}//end int main(int argc, char const *argv[])
