#include <iostream>

typedef unsigned int uint;

/* __11:__ Modify our vowel-counting program so that it counts the number of occurrences of the
* following two-character sequences: ff, f1, and fi.
*/

int main(int argc, char const *argv[])
{
	uint g_aCnt;
	uint g_eCnt;
	uint g_iCnt;
	uint g_oCnt;
	uint g_uCnt;
	uint g_ffCnt;
	uint g_fiCnt;
	uint g_f1Cnt;
	uint g_spaceCnt;
	uint g_tabCnt;
	uint g_newlineCnt;
	char g_vowel;

	//init
	g_aCnt = g_eCnt = g_iCnt = g_oCnt = g_uCnt = g_spaceCnt = g_tabCnt = g_newlineCnt = g_ffCnt = g_fiCnt = g_f1Cnt =  0;

	while (std::cin.get(g_vowel))
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
		case '\t':
			++g_tabCnt;
			break;
		case ' ':
			++g_spaceCnt;
			break;
		case '\n':
			++g_newlineCnt;
			break;
		case 'f':
			if (std::cin.peek()== 'f')
				++g_ffCnt;
			if (std::cin.peek() == '1')
				++g_f1Cnt;
			if (std::cin.peek() == 'i')
				++g_fiCnt;
			break;
		}
	}

	std::cout
		<< g_aCnt << " A's\n"
		<< g_eCnt << " E's\n"
		<< g_iCnt << " I's\n"
		<< g_oCnt << " O's\n"
		<< g_uCnt << " U's\n"
		<< g_spaceCnt << " Spaces\n"
		<< g_tabCnt << " Tab's\n"
		<< g_newlineCnt << " Newlines\n"
		<< g_ffCnt << " ff's\n"
		<< g_fiCnt << " fi's\n"
		<< g_f1Cnt << " f1's\n";


	std::cin >> g_vowel;
	return 0;
}//end int main(int argc, char const *argv[])

