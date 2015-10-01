#Chapter 2 Exercises
_____________

* __1:__ What are the differences between int, long, long long, and short? Between an unsigned and a signed type?  Between a float and a double?
* __2:__ To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

* __3:__ What output will the following code produce?
```c++
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
```
* __4:__ Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is. 

* __5__: Determine the type of each of the following literals. Explain the difference among the literals in each of the four examples
		+ (a) 'a', L'a', "a", L"a"
		+ (b) 10, 10u, 10L, 10uL, 012, 0xC
		+ (c) 3.14, 3.14f, 3.14L
		+ (d) 10 , 10u, 10., 10e-2

* __6:__ What if any are the differences between the following definitions:
```c++
	int month = 9, day = 7;
	int month = 09, day = 07;
```
* __7:__ What values do these literals represent? What type does each have?
	+ (a) "Who goes with F\145rgus?\012"
	+ (b) 3.14e1L
	+ (c) 1024f
	+ (d) 3.14L

* __8:__ using escape sequences, write a program to print 2M followed by a new-line. Modify the program to 2, then a tab, then an M, followed by a newline.

* __9:__ Explain the following definitions. For those that are illegal, explain what's wrong and how to correct it.
	+ (a) std::cin >> int input_value;
	+ (b) int i = {3.14};
	+ (c) double salary = wage = 9999.99;
	+ (d) int i = 3.14;

* __10:__ What are the initial values if any, of each of the following variables?
```c++	
	std::String global_str;
	int global_int;

	int main()
	{
		int local_int;
		std::string local_str;

	}
```
* __11:__ Explain whether each of the following is a declaration of a definition:
	+ (a) extern int ix = 1024;
	+ (b) int iy;
	+ (c) extern int iz;

* __12:__ Which, if any, of the following names are invalid?
	+ (a) int double = 3.14;
	+ (b) int _;
	+ (c) int catch-22;
	+ (d) int 1_or_2 = 1;
	+ (e) double Double = 3.14;

* __13:__ What is the value of j in the following program?
```c++
	int i = 42;
	
	int main()
	{
		int i = 100;
		int j = i;

	}
```
* __14:__ Is the following program legal if so what values are printed?
```c++
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;
	std::cout << i << " " << sum << std::endl;
```

* __15:__ which of the following definitions if any are invalid? why?
	+ (a) int ival = 1.01;
	+ (b) int &rval1 = 1.01;
	+ (c) int &rval2 = ival;
	+ (d) int &rval3;

* __16:__ Which if any of the following assignments are invalid? if the are valid, explain what they do.
`int i =0, $r12 = i, double d = 0, &r2 =d;`
	+ (a) r2 = 3.14159;
	+ (b) r2 = r1;
	+ (c) i = r2;
	+ (d) r1 = d;

* __17:__ What does the following code print?
```c++
	int i, &ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;
```
* __18:__ Write code to change the value of a pointer. Write code to change the value to which the pointer points.

* __19:__ Explain the key differences between pointers and references.

* __20:__ What does the following program do?
```c++
		int i = 42;
		int *p1 = &i;
		*p1 = *p1 * *p1;
```
* __21:__ Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
`int i = 0;`
	+ (a) double* dp = &i;
	+ (b) int *ip = i;
	+ (c) int *p = &i;

* __22:__  Assuming p is a pointer to int, explain the following code:
```c++
		if(p) //...
		if(*p)//...
```
* __23:__ Given a point p, can you determine whether p points to a valid object? If so, how? If not, why not?

* __24:__  Why is the initialization of p legal but that of lp illegal?
```c++
	int i = 42; void *p = &i; long *lp = &i;
```
* __25:__ Determine the types and values of each of the following variables.
	+ (a) int* ip, i, &r = i; 
	+ (b) int i, *ip = 0; 
	+ (c) int* ip, ip2;

* __26:__ Which of the following are legal? For those that are illegal, explain why?
	+ (a) const int buf;
	+ (b) int cnt = 0;
	+ (c) const int sz = cnt;
	+ (d) ++cnt; ++sz;

* __27:__ Which of the following initializations are legal? Explain why.
	+ (a) int i = -1, &r = 0;
	+ (b) int *const p2 = &i2;
	+ (c) const int i = -1, &r = 0;
	+ (d) const int *const p3 = &i2;
	+ (e) const int *p1 = &i2;
	+ (f) const int *const p3;
	+ (g) const int i2 = i, &r = i;

* __28:__ Explain the foollowing definitions. Identify any that are illegal.
	+ (a) int i, *const cp;
	+ (b) int *p1, *const p2;
	+ (c) const int ic, &r = ic;
	+ (d) const int *const p3;
	+ (e) const int *p;

* __29:__ Using the variables in the previous exercise, which of the following assignments are legal? Explain why:
	+ (a) i = ic;
	+ (b) p1 = p3;
	+ (c) p1 = &ic;
	+ (d) p3 = &ic;
	+ (e) p2 = p1;
	+ (f) ic = *p3;

* __30:__ For each of the following declarations indicate whether the object being declared has tope-level or low-level const.
```c++
	int i;
	i = 0;
	const int v2 = 0;
	int v1;
	v1 = v2;
	int *p1 = &v1;
	int &r1 = v1;
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```
* __31:__ Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low level const applies in each case. 
```c++
	r1 = v2;
	p1 = p2;
	p1 = p3;
	p2 = p1;
	p2 = p3;
```
* __32:__ Is the following code legal or not? if not, how might you make it legal?
```c++
	int null = 0, *p = null;
```

* __33:__ Using the variable definitions from this section, determine what happens in each of these assignments:
```c++	
	a = 42;
	b = 42;
	c = 42;
	d = 42;
	e = 42;
	g = 42;
```
* __34:__ Write a program containing  the variables and assignments from the previous exercise. Print the variables before and after the assignments to check whether your predictions in the previous exercise were correct. If not, study the examples until you can convince yourself you know what led to the wrong conclusion. 

* __35:__ Determine the types deduced in each of the following definitions. Once You've figured out the types write a program to see whether you were correct. 
```c++
	const int i = 42;
	auto j = i; 
	const auto &k = i; 
	auto *p = 7i;
	const auto j2 = i, &k2 = i;
```
* __36:__ In the following code, determine the type of each variable and the value each variable has when the code finishes:
```c++
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;
```
* __37:__ Assignment is an example of an expression that yields a reference type.  The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression i = x is int&. Using that knowledge, determine the type and value of each variable in this code:
```c++
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;
```
* __38:__ Describe the difference in the type deduction between decltype and auto. Give and example of an expression where auto and decltype will deduce the same type and an example where they will deduce different types.

* __39:__ Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference.
```c++
		struct Foo{/* Empty*/ }

		int main(){

			return 0;
		}
```
* __40:__ Write your own version of the `Sales_data' class.

* __41:__ Use your `Sales_data' class to rewrite the exercises in 1.5.1 (p. 22, 24, 25). For now you should define your `Sales_data' class in the same file as your main function.  

* __42:__ Write your own version of the `Sales_data.h` header and use it to rewrite the exercise from (p. 76)
