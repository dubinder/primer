#include <iostream>

/* __8:__ Write a program using a series of if statements to count the number
* of vowels in text read from `cin`.
*/

int main(int argc, char const *argv[])
{
	unsigned char g_vowel;
	int g_aCnt;
	int g_eCnt;
	int g_iCnt;
	int g_oCnt;
	int g_uCnt;

	//init
	g_aCnt = g_eCnt = g_iCnt = g_oCnt = g_uCnt = 0;

	while (std::cin >> g_vowel)
		if (g_vowel == 'a')
			++g_aCnt;
		else if (g_vowel == 'e')
			++g_eCnt;
		else if (g_vowel == 'i')
			++g_iCnt;
		else if (g_vowel == 'o')
			++g_oCnt;
		else if (g_vowel == 'u')
			++g_uCnt;
		else if (g_vowel == '0')
			break;

	std::cout
		<< g_aCnt << " A's\n"
		<< g_eCnt << " E's\n"
		<< g_iCnt << " I's\n"
		<< g_oCnt << " O's\n"
		<< g_uCnt << " U's\n";

	std::cin >> g_vowel;

	return 0;
}//end int main(int argc, char const *argv[])
