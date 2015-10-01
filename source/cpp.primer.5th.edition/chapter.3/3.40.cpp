#include <iostream>
#include <string>
/* 
* __40:__ Write a program to define two character arrays initialized from string literals. 
* Now define a third character array to hold the concatenation of the two arrays.
* Use `strcpy` and `strcat` to copy the two arrays into the third. 
*/

int main(int argc, char const *argv[])
{
	char g_s1[] = "string";
	char g_s2[] = "string";
	char g_s3[14];
	int g_endInt;

	strcpy(g_s3, g_s1);
	strcat(g_s3, g_s2);

	std::cout << g_s3 << std::endl;

	std::cin >> g_endInt;
	return 0;
}//end int main(int argc, char const *argv[])

	

