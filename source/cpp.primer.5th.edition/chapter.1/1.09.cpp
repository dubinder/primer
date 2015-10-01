#include <iostream>

using namespace std;

int main(int argc, char * argv []){
    // guass formula n[2a + (n-1)d]/2
	int sum, gauss, i = 1;
	gauss = 0;
	sum = 0;

	while(i <= 100){
		sum += i;
		i++;
		cout << sum<< "\n";
	}
	cout << (51*(50*2 + 50*1))/2;
	cout << sum<< "\n";
	
	system("pause");
	return 0;
}//End Main

//EOF
