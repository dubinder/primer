* __1:__ What is a null statement? When might you use a null statement?
* __2:__ What is a block? when might you use a block>
* __3:__ Use the comma operator ( 4.10, p 1.57) to rewrite the while loop from 1.4.1(p.11) so that it no longer requires a block. Explain where this rewrite improves or diminished the readability of this code. 
* __4:__ Explain each of the following examples, and correct any problems you detect. 
	+ (a) while `(string::iterator iter != s.end()) {/*...*/}`
	+ (b) while `(bool status = find(word)) {/* ... *?} if (!status) {/* ... */}`

* __5:__ Using an if-else statement, write your own version of the program to generate the letter grade from a numeric grade.

* __6:__ Rewrite you grading program to use the conditional operator ( 4.7 p.151) in place of the if-else statement.

* __7:__ Correct the errors in each of the following code fragments:
	+ (a) if (ival1 != ival2)
			ival1 = ival2
		else ival1 = ival2 = 0;
	+ (b) if (ival < minval)
			minval = ival;
			occurs = 1;
	+ (c) if (int ival = get_value())
			cout << "ival = " << ival << endl;
			if(!ival)
			cout << "ival = 0\n";
	+ (d) if (ival = 0)
			ival = get_value();

* __7:__ What is a "dangling else"? how are else clauses resolved in C++?

* __8:__ Write a program using a series of if statements to count the number of vowels in text read from `cin`.

* __9:__ There is one problem with our vowel-counting program as we've implemented it: It doesn't count capitol letters as vowels. Write a program that counts both lower- and uppercase letters as the appropriate vowel--that is, your program should count both 'a' and 'A' as parent of aCnt, and so forth.

* __10:__ Modify out vowel-counting program so that it also counts the number of blank spaces, tabs, and newlines read.

* __11:__ Modify our vowel-counting program so that it counts the number of occurrences of the following two-character sequences: ff, f1, and fi.

* __12:__ Each of the programs in the highlighted text on page 184 contains a common programming error. Identify and correct each error. 

* __14:__ Write a program to read strings from standard input looking for duplicated words. The program should find places in the input where one word is followed immediately by itself. Keep track of the largest number of times a single repetition occurs and which word is repeated or else Print a message saying that no word was repeated.  For example, if the input is how now now now brown cow cow the output should indicate the word now occurred three times. 

* __15:__ Explain each of the following loops. Correct any problems you detect. 
(a) for (int ix = 0; ix != sz; ++ix) {/* ... */}
	if (ix != sz)
	// ...
(b) int ix;
	for(ix != sz; ++ix) }{/* ... */}
(c) for(int ix = 0; ix != sz; ++ix,  ++ sz) {/* ... */}

* __16:__ The while loop is particular good at executing while some condition holds; for example, when we need to read values until end-of-file. the for loop is generally thought of as a step loop: An index steps through a range of values in a collection. Write an idiomatic use of each loop an d then rewrite each using the other loop construct. If you could use only one loop, which would you choose? Why?

* __17:__ Given two vectors of ints, write a program to determine whether one vector is a prefix of the other. For vectors of unequal length, compare the number of elements of the smaller vector. For example, given the vectors containing 0, 1,1, and 2 and 0,1,1,2,3,5,8, respectively your program should return true. 

* __18:__ Explain each of the following loops. Correct any problems you detect.
	(a) do
		int v1, v2;
		cout << "Please enter two numbers to sum:" ;
		if (cin >> v1 >>v2)
			cout << "Sum is : " << v1 + v2 << endl;
		while(cin)

	(b) do{
			//...


		}while(int ival = get_response());

	(c) do{
			int ival = get_response();
		}while(ival);

* __19:__ Write a program that uses a do while loop to repetitively request two strings from the user and report which string is less than the other. 

* __20:__ Write a program to read a sequence of strings from the standard input until either the same word occurs twice in succession or all the words have been read. use a while loop to read the text one word at a time. Use the break statement to terminate the loop if a word occurs twice in succession. Print the word if it occurs twice in succession, or else print a message saying that no word was repeated. 

* __21:__ Revise the program from exercise in 5.5.1(p.191) so that it looks only for duplicated words that start with and uppercase letter. 

* __22:__ The last example is this section that jumped back to begin could be better written using a loop. Rewrite the code to eliminate the goto. 

* __23:__ Write a program that reads two integers from the standard input and prints the result of dividing the first number by the second. 

* __24:__ Revise your program to throw an exception if the second number is zero. Test your program with a zero input to see what happens on your system if you don't catch an exception.

* __25:__  Revise your program from the previous exercise to use a try block to catch the exception. the catch clause should print a message to the user and ask them to supply a new number and repeat the code inside the try. 

