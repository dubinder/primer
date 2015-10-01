#Chapter 1 Exercises
__________________

* 3: Write a program to print Hello, World on the standard output.

* 4: Our program used the addition operator, `+` to add two numbers.  Write  a program that uses the 
	multiplication operator, `*` to print the product instead. 

* 5: We wrote the output in one large statement. Rewrite the program to use a separate statement to print each
	operand.

* 6: Explain whether the following program fragment is legal.
	+ If the program is legal, what does it do? if the program is not legal, why not?
```c++
	std::cout << "The sum " << v1;
			  << " and " << v2;
			  << " is " << v1 + v2 << std::endl;
```	


* 7: Compile a program that has incorrectly nested comments

* 8: Indicate which, if any, of the following output statements are legal:
	+ Test your answers by compiling a program with each of these statements.
```c++
	std:cout << "/*";
	std:cout << "*/";
	std:cout << /* "*/" */;
	std:cout << /* "*/" /* "/*" */;
```


* 9: Write a program that uses a while to sum the numbers from 50 to 100.

* 10: In addition to the `++` operator that adds 1 to its operand, there is a decrement operator `--` that subtracts 1. use the decrement operator to write a while that prints the numbers from ten down to zero

* 11: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers. 

* 12: What does the following loop do? What is the final value of sum?
```c++
	 int sum = 0;
	 for(int i = -100;  i <= 100; ++i)
	 	sum +=i;
```
* 13: Rewrite 1.9 and 1.10 using for loops.

* 16: Write your own version of a program that prints the sum of a set of integers read from `cin`

* 19: Revise the program you wrote for Exercise 1.11 to handle input in which the smaller first number is smaller. 

* 20: [Primer](http://www.informit.com/title/0321714113) contains a copy of `Sales_item.h` in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output

* 21: Write a program that reads two Sales_item objects that have the same ISBN and produces their sum. 

* 22: Write a program that reads several transactions for the same ISBN.  Write the sum of all the transactions that were read. 

* 23: Write a program that reads several transactions and counts how many transactions occur for each ISBN

* 24: Test the previous program by giving multiple transactions representing multiple ISBNs. The records for each ISBN should be grouped together

* 25: Using `Sales_item.h` head from the Web site, compile and execute the bookstore program presented in this section.


```c++
#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item total; //var to hold data for next transaction
	//read the first transaction and ensure that there are data to process
	if (std::cin >> total){
		Sales_item trans;

		while(std::cin >> trans){
			if (total.isbn()== trans.isbn())
				total += trans; 
			else{
				std::cout << total << std::endl;
				total = trans;
			}
		}//end while
		std::cout << total << std::endl;
	} else{
		std::cerr << "No data?!" << std::endl;
		return -1; //indicate failure
	}

	return 0;
}//end main
```