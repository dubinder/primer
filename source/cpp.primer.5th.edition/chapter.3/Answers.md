* __3:__ Whitespace characters are the delimiter for the standard in. Where as getline the only delimiter is the endl, or '\n'

* __7:__ See code 3.06.cpp.  Range 'for' does not work in vs2010.

* __8:__ It depends on the situation and the readability of the code. 

* __9:__ The code will print out the first char in the string s. Yes it is legal code. 

* __11:__ Yes the following range for is legal, it is a reference and will end up be a char ref. 

* __12:__ 
	+ (a) Legal
	+ (b) Illegal can not initialize a list of int vectors in strings
	+ (c) Legal

* __13:__ 
	+ (a) No elements
	+ (b) 10 elements value 0
	+ (c) 10 elements value 42
	+ (d) 1 element value 10
	+ (e) 2 elements values 10, 45
	+ (f) 10 elements value default
	+ (g) 10 elements value "hi"

* __18:__ The program is illegal. There are no elements to change. You can not add elements to a vector by subscripting. 
```c++
	vector<int> ivec;
	ivec.push_back(42);
```

* __22:__ This problem doesn't make much sense. There is no data file text. It seems to reference a loop in the text that will print text until the vector is empty. 



