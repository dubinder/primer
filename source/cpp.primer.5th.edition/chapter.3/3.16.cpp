#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

/*
* __16:__ Write a program to print the size and contents of the vectors from exercise 3.13. Check whether your answers that exercise were correct. If not, restudy 3.3.1 (p.97) until you understand why you were wrong
*/


int main(int argc, char const *argv[])
{
	string word;
	int i; 
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);
	//std::vector<int> v4{10}; //c++ 11
	//std::vector<int> v5{10, 45};
	//std::vector<string> v6{10};
	//std::vector<string> v7{10, "hi"};


	//for( i = 0; i < v1.size(); ++i)
		
	cout << "vector 1: " << "size: " << v1.size() << " \n";
	cout << "vector 2: " << "size: " << v2.size() << " \n";
	cout << "vector 3: " << "size: " << v3.size() << " \n";
	//cout << "vector 4: " << "size: " << v4.size(); //c++11
	//cout << "vector 5: " << "size: " << v5.size();
	//cout << "vector 6: " << "size: " << v6.size();
	//cout << "vector 7: " << "size: " << v7.size();

	for( i = 0; i < v1.size(); ++i)
	{
		//if(v1.empty())
		cout << "Vector 1: " << v1[i] << endl;
	}
	for( i = 0; i < v2.size(); ++i)
	{
		//if(v2.empty())
		cout << "Vector 2: " << v2[i] << endl;
	}
	for( i = 0; i < v3.size(); ++i)
		cout << "Vector 3: " << v3[i] << endl;

	cout << "Yeah vector\n";
	cin >> i;
	return 0;
}//End int main(int argc, char const *argv[])
