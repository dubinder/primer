#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
	//sum the numbers 50 to 100
	int x;
	int sum;
	sum = 0;
	x = 50;

	while(x <= 100)
	{	
		sum += x;
		++x;
	}
	cout << sum << endl;
	cin >> x;
	//sum the numbers 50 to 100 with a for loop
	sum = 0;
	for(int i = 50; i <= 100; ++i)
		sum += i;
	cout << sum << endl;

	cin >> x;
	x = 10;
	while(x >= 0)
	{	
		
		cout << x << endl;
		--x;
	}

	//print out numbers counbting down form ten. 
	for(int i = 10 i >= 0; i--)
		cout << i << endl;



	int v1, v2;
	v1 = v2 = 0;
	cout << "Please enter two integers:\n";
	cin >> v1;
	cin >> v2;

	if(v1 < v2)
		while(v1 <= v2){
			cout << v1 << "\n";
			v1++;

		}//end while
	else
		while(v2 <= v1){
			cout << v2 << "\n";
			v2++;
		}//end while

	//print the difference between two integers with a for loop
	v1 = v2 = 0;
	cout << "Please enter two integers:\n";
	cin >> v1;
	cin >> v2;

	if(v1 < v2)
		for(v1; v1 <= v2; v1++)
			cout << v1 << "\n";
	else
		for(v2; v2 <= v1; v2++)
			cout << v2 << "\n";

		cin >> x;
	return 0;
}//End main