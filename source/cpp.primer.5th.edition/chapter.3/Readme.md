* __1:__ Rewrite the exercises from 1.4.1 (p.13) and 2.6.2 (p.76) with appropriate using declarations. 

* __2:__ Write a program to read the standard input a line at a time. Modify your program to read a word at a time. 

* __3:__  Explain how whitespace characters are handled in the string input operator and in the `getline` function. 

* __4:__  Write a program to read two strings and report whether the strings are equal. If not report which of the two is larger. Now, change the program to report whether the strings have the same length, and if not, report which is longer. 

* __5:__ Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next change the program to separate adjacent input strings by a space. 

* __6:__ Use a range for to change all the characters in a string to X.

* __7:__ What would happen if you define the loop control variable in the previous exercise as type char? Predict the results and then change your program to use a char to see if you were right.

* __8:__ Rewrite the program in the first exercise, first using a while and again using a traditional for loop.  Which of the three approaches do you prefer and why?

* __9:_ What does the following program do? Is it valid? If not, why not?
```c++	
string s;
cout << s[0] << endl; 
```

* __10:__  Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed. 

* __11:__ Is the following range for legal? If so, what is the type of c?
```c++	
	const string s = "Keep out!";
 	for (auto &c : s) {/*..... */}
```
* __12:__ Which if any, of the following vector definitions are in error? For those that are legal, explain what the definition does. For those that are not legal explain why they are illegal.
 + (a) vector<vector<int>> ivec;
 + (b) vector<string> svec = ivec;
 + (c) vector<string> svec(10, "null");

* __13:__ How many elements are there in each of the following vectors? What are the values of the elements?
	+ (a) vector<int> v1;
	+ (b) vector<int> v2(10);
	+ (c) vector<int> v3(10, 42);
	+ (d) vector<int> v4{10};
	+ (e) vector<int> v5{10, 45};
	+ (f) vector<string> v6{10};
	+ (g) vector<string> v7{10, "hi"};

* __14:__ Write a program to read a sequence of ints from `cin` and store those values in a `vector`:

* __15:__ Repeat the previous program but read strings this time. 

* __16:__ Write a program to print the size and contents of the vectors from exercise 3.13. Check whether your answers that exercise were correct. If not, restudy 3.3.1 (p.97) until you understand why you were wrong. 

* __17:__ Read a sequence of words from `cin` and store the values a vector. After you've read all the words, process the vector and change each word to uppercase. Print the transformed elements eight words to a line. 

* __18:__ Is the following program legal? If not, how might you fix it?
```c++
	vector<int> ivec;
 	ivec[0] = 42;
```
* __19:__ List three ways to define a vector and give it ten elements, each with the value of 42. Indicate whether there is a preferred way to do so and why.

* __20:__ Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change you program so that it prints the sum of the first and last elements, followed by the sum of the second and second-to-last, and so on. 

* __21:__ Redo the first exercise from 3.3.3 (p. 105) using iterators.

* __22:__ Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond to the first paragraph to all uppercase. After you've updated the text, prints its contents.

* __23:__ Write a program to create a vector with ten int elements. Using an iterator, adding each element a value that is twice its current value. Test your program by printing the vector. 

* __24:__ Redo the last exercise from 3.3.3 (p. 105) using iterators. 

* __25:__ Rewrite the grade clustering program from 3.3.3(p.104) using iterators instead of subscripts.

* __26:__ In the binary search program on page 112, why did we write `mid = beg + (end - beg) /2;` instead of `mid = (beg + end) /2;`?

* __27:__ Assuming txt_size is a function that takes no arguments and returns and int value, which of the following definitions are illegal? Explain why.
`unsigned buf_size = 1024;`
	 + (a) int ia[buf_size];
	 + (b) int ia[4*7 -14]
	 + (c) int ia[txt_size()];
	 + (d) char st[11] = "fundamental";

* __28:__ what are the values in the following arrays?
```c++	
	string sa[10];
 	int ia[10];
 	int main(){
 		string sa2[10];
 		int ia2[10];
 	}
```

* __29:__ List some of the drawbacks of using an array instead of a vector. 

* __30:__ Identify the indexing errors in the following code:
```c++
	constexpr size_t array_size = 10;
 	int ia[array_size];
 	for (size_t ix = 1; ix <= array_size; ++ix)
 		ia[ix] = ix;
```

* __31:__ Write a program to define an array of ten ints. Give each element the same value as its position in the array.

* __32:__ Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.

* __33:__ What would happen if we did not initialize the scores array in the program on page 116?

* __34:__ Given that `p1`, and `p2` point to elements in the same array , what does the following code do? Are there values of `p1` or `p2` that make this code illegal?

* __35:__ Using pointers, write a program to set the elements in an array to zero. 

* __36:__ Write a program to compare two arrays for equality. Write a similar program to compare two vectors. 

* __37:__ What does the following program do?
```c++
	const char ca[] = {'h', 'e', 'l', 'o'}
 	const char *cp = ca;
 	while (*cp) {
 		cout << *cp << endl;
		++cp;
 	}
```

* __38:__ In this section,  we noted that it was not only illegal but meaningless to try to add two pointers. Why would adding two pointers be meaningless?

* __39:__ Write a program to compare two strings. Now Write a program to compare the values of two C-Style strings.

* __40:__ Write a program to define two character arrays initialized from string literals. Now define a third character array to hold the concatenation of the two arrays. Use `strcpy` and `strcat` to copy the two arrays into the third. 

* __41:__ Write a program to initialize a vector from an array of ints. 

* __42:__ Write a program to copy a vector of ints into an array of ints. 

* __43:__ Write three different versions of a program to print the elements of ia. One version should use a range for to manage the iteration, the other two should use an ordinary for loop in one case using subscripts and in the other using pointers. In all three programs Write all the types directly. That is, do not use a type `alias`, `auto` or `decltype` to simplify the code. 

* __44:__ Rewrite the programs from the previous exercises using a type `alias` for the type of the loop control variables. 

* __45:__  Rewrite the programs again this time using `auto`. 
