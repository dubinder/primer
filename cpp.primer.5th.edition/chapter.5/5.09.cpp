#include <iostream>

typedef unsigned int uint;

/* __9:__ There is one problem with our vowel-counting program as we've implemented it:
* It doesn't count capitol letters as vowels. Write a program that counts both lower and
* uppercase letters as the appropriate vowel--that is, your program should count both 'a'
* and 'A' as parent of aCnt, and so forth.
*/

int main(int argc, char const *argv[])
{
	uint g_aCnt;
	uint g_eCnt;
	uint g_iCnt;
	uint g_oCnt;
	uint g_uCnt;
	char g_vowel;

	//init
	g_aCnt = g_eCnt = g_iCnt = g_oCnt = g_uCnt = 0;

	while (std::cin >> g_vowel)
	{
		if (g_vowel == '0')
			break;
		switch (g_vowel)
		{
			case 'A':case 'a':
				++g_aCnt;
				break;
			case 'E':case 'e':
				++g_eCnt;
				break;
			case 'I':case 'i':
				++g_iCnt;
				break;
			case 'O':case 'o':
				++g_oCnt;
				break;
			case 'U':case 'u':
				++g_uCnt;
				break;
		}
	}

	std::cout
		<< g_aCnt << " A's\n"
		<< g_eCnt << " E's\n"
		<< g_iCnt << " I's\n"
		<< g_oCnt << " O's\n"
		<< g_uCnt << " U's\n";

		std::cin >> g_vowel;
	return 0;
}//end int main(int argc, char const *argv[])

