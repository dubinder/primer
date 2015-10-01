#include <iostream>

using namespace std;

int main(int argc, char * argv[]){
	//prompt for two integers print each number in the range specified by those two ints. 
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


	system("pause");
	return 0;
}//end int main(int argc, char const *argv[])


//just putting the 1.11 code in here since I handled it in that problem. 