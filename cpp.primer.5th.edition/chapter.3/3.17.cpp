#include <iostream>
#include <string>
#include <vector>
#include <cctype>
/*
* __17:__ Read a sequence of words from `cin` and store the values a vector. 
* After you've read all the words, process the vector and change each word to uppercase.
* Print the transformed elements eight words to a line. 
*/

int main(int argc, char const *argv[])
{

	std::string word;
	std::vector<std::string> svec;

	while(std::cin >> word)
	{	
		svec.push_back(word);
		if(word == "EOF")
			break;
	}

	for(int i = 0; i < svec.size(); ++i)
	{
		word = svec[i];
		for(int j = 0; j < word.length(); ++j)
			word[j] = toupper(word[j]);
		svec[i] = word;

	}

	for(int i = 0; i < svec.size(); ++i)
	{
		std::cout << svec[i] << " ";
		if(i % 8 == 0 && i != 0)
			std::cout << std::endl;
	}	
		/* code */
	std::cin >> word;
	return 0;
}// END int main(int argc, char const *argv[])
