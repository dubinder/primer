/**********************

2.26 (Checkerboard Pattern) Display the following checkerboard pattern with eight output
statements, then display the same pattern using as few statements as possible.
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
******************/

#include <iostream>

using namespace std;

int main(){


	//1
	cout << " * * * * * * * *" << endl;
	//2
	cout << "* * * * * * * * " << endl;
	//3
	cout << " * * * * * * * *" << endl;
	//4
	cout << "* * * * * * * * " << endl;
	//5
	cout << " * * * * * * * *" << endl;
	//6
	cout << "* * * * * * * * " << endl;
	//7
	cout << " * * * * * * * *" << endl;
	//8
	cout << "* * * * * * * * " << endl;

    cout << "Break\n";
	
	for(int i = 0; i < 8; i++){
	
		if(i % 2 ==0)
				cout << " * * * * * * * *" << endl;
		else
			cout << "* * * * * * * * " << endl;
	
	}

	system("pause");
	return 0;
}//end main