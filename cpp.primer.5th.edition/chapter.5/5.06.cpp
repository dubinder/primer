#include <iostream>
#include <string>
#include <vector>

/* __6:__ Rewrite you grading program to use the conditional operator ( 4.7 p.151)
* in place of the if-else statement.
*/
int main(int argc, char const *argv[])
{
	const std::vector<std::string> g_scores = { "F", "D", "C", "B", "A", "A++" };
	std::string g_lettergrade;
	int g_grade;

	std::cin >> g_grade;

	g_grade < 60 ? g_lettergrade = g_scores[0] : g_lettergrade = g_scores[(g_grade - 50) / 10];

	g_grade % 10 > 7 ? g_lettergrade += '+' : (g_grade % 10 < 3) ? g_lettergrade += '-' : 0;

		std::cout
		<< "letter grade = " << g_lettergrade << "\n";

	system("pause");
	return 0;
}//end int main(int argc, char const *argv[])

