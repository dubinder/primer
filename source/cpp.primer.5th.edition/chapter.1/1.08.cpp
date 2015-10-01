#include <iostream>

using namespace std;

int main(int argc, char * argv[]){


	cout << "/*";
	cout << "*/";
	//cout << /* "*/" */;
	cout << /* "*/" /* "/*" */;

	return 0;

}//end main

// 1.8 Answers. First two statements are legal
//  			the third is not, 
//				the fourth is legal
//This should not compile nicely with these nested comments