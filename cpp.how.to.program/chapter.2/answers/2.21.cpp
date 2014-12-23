#include <iostream>


using namespace std;

int main(){

	char input;

	std::cout << "Please enter a character\n";
	std::cin >> input;
	
	for(int i = 0; i <9; i++)
	std::cout << input;
	for(int i = 0; i <=9; i++)
	std::cout << " ";
	for(int i = 0; i < 3; i++)
	std::cout << input;
	for(int i = 0; i < 15; i++)
	std::cout << " ";
	std::cout << input;
	for(int i = 0; i < 16; i++)
	std::cout << " ";
	std::cout << input << endl;
	
	std::cout << input<< "\t"<< input << "        "<< input << "     " << input << "            "<< input <<	input << input<<"              " << input << " " << input<< "\n";
	std::cout << input<< "\t"<< input << "\t"<< input << "\t" << input << "          "<< input <<	input << input<< input << input<<"            " << input << "   " << input<< "\n";
	std::cout << input<< "\t"<< input << "\t"<< input << "\t" << input << "            "   << input<<"             " << input << "     " << input<< "\n";
	std::cout << input<< "\t"<< input << "\t"<< input << "\t" << input << "            "   << input<<"            " << input << "       " << input<< "\n";
	std::cout << input<< "\t"<< input << "\t"<< input << "\t" << input << "            "   << input<<"             " << input << "     " << input<< "\n";
	std::cout << input<< "\t"<< input << "\t"<< input << "\t" << input << "            "   << input<<"              " << input << "   " << input<< "\n";
	std::cout << input<< "\t"<< input << "        "<< input << "     " << input << "             "<< input << "               " << input << " " << input<< "\n";
	
		for(int i = 0; i <9; i++)
	std::cout << input;
	for(int i = 0; i <=9; i++)
	std::cout << " ";
	for(int i = 0; i < 3; i++)
	std::cout << input;
	for(int i = 0; i < 15; i++)
	std::cout << " ";
	std::cout << input;
	for(int i = 0; i < 16; i++)
	std::cout << " ";
	std::cout << input << endl;

	system("pause");
	return 0;
}//end main