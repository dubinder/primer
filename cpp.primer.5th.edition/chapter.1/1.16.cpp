#include <iostream>

using namespace std;
//Program that prints the sum of a set of integers read from cin

int main(int argc, char const *argv[])
{
	int v1, sum, x;
    v1 = sum = 0;
    
	while(cin >> v1)
        sum += v1;


    cout << sum << "\n";
	system("pause");
	return 0;
}
