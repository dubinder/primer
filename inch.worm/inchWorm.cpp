/***************
*
* Super basic worm crawling across the console screen 
* Nothing special to see.  
* Should probally name this differently. 
*
******************/
#include <iostream>
#include <string>

using namespace std;

int main(){

	string temp;
	temp = "";
	for(int i = 0; i < 100000; i++){

		unsigned int size = temp.size();
		temp.resize(size + 1, ' ');
		cout << temp << "---";
		system("cls");

		if( i > 76)
		{
			
			temp.resize(size - 1, ' ');
			cout << temp << "---";
			system("cls");

		
		}

	}
	
	system("pause");
	return 0;
}//end main