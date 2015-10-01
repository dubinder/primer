#include <iostream>
#include <string>
#include <vector>
/* __5:__ Using an if-else statement, write your own version of the program
*  to generate the letter grade from a numeric grade.
*/


int main(int argc, char const *argv[])
{
	const std::vector<std::string> g_scores = { "F", "D", "C", "B", "A", "A++" };
	std::string g_lettergrade;
	int g_grade;

	std::cin >> g_grade;

	if (g_grade < 60)
		g_lettergrade = g_scores[0];
	else
		g_lettergrade = g_scores[ (g_grade - 50) / 10 ];

		if (g_grade % 10 > 7)
			g_lettergrade += '+';
		else if (g_grade % 10 < 3)
			g_lettergrade += '-';

	std::cout
		<< "letter grade = " << g_lettergrade << "\n";

		system("pause");
	return 0;
}//end int main(int argc, char const *argv[])

