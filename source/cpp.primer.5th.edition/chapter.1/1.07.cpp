#include <iostream>

using namespace std;

int main(int argc, char * argv[]){


	cout << "/*";
	cout << "*/";
	cout << /* "*/" */;
	cout << /* "*/" /* "/*" */;

	return 0;

}//end main

//This should not compile nicely with these nested comments