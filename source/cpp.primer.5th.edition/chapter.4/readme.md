* __1:__ What is the value returned by 5 + 10 * 20/2
* __2:__ Using Table 4.12 (p166), parenthesize the following expressions to indicate the order in which the operands are group:
	+ (a) * vec.begin()
	+ (b) * vec.begin() + 1

* __3:__ Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off?

* __4:__ Parenthesize the following expression to show how it is evaluated. Test you answer by compiling the expression (without parentheses) and printing its result. 
	`12 / 3 * 4 + 5 * 15 + 24 % 4 / 2`

* __5:__ Determine the result of the following expressions.
	+ (a) -30 * 3 + 21 / 5
	+ (b) -30 + 3 * 21 / 5
	+ (c) 30 / 3 * 21 % 5
	+ (d) -30 / 3 * 21 % 4

* __6:__  Write an expression to determine whether an int value is even or odd?
* __7:__ What does overflow mean? Show three expressions that will overflow.

* __8:__ Explain when operands are evaluated in logical AND, logical OR, and equality operators.

* __9:__ Explain the behavior of the condition in the following if:
```c++	
	const char *cp = "Hello World";
	if(cp && *cp)
```
* __10:__ Write the condition for a while loop that would read ints from the standard input and stop when the value read is equal to 42.

* __11:__ Write an expression that tests four values, a,b,c, and d, and ensures that a is greater than b, which is greater than c, which is greater than d. 

* __12:__ Assuming i, j, and k, are all ints, explain what i != j < k means.

* __13:__ What are the values of i and d after each assignment?
```c++	
	int i;
	double d;
```
	+ (a) d = i = 3.5; 
	+ (b) i = d = 3.5;

* __14:__ Explain what happens in each of the if tests:
	if (42 = i) // ...
	if (i = 42) // ...

* __15:__ The following assignment is illegal. Why? How would you correct it?

	double dval; int ival; int *pi;
	dval = ival = pi = 0;

* __16:__ Although the following are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be. 
	+ (a) if (p = getPtr() != 0) 
	+ (b) if (i = 1024)

* __17:__ Explain the difference between prefix and postfix increment:

* __18:__ What would happen if the while loop on page 148 that prints the elements from a vector used the prefix increment operator?

* __19:__ Given  the ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the behavior of each of these expressions> Which, if any, are likely to be incorrect? Why? How might each be corrected?

* __20:__ Assuming that iter is a `vector<string>::iterator`, indicate which if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren't legal are in error. 
	+ (a) *iter++;
	+ (b) (*iter)++;
	+ (c) *iter.empty()
	+ (d) iter->empty();
	+ (e) ++*iter;
	+ (f) iter++->empty();

* __21:__ Write a program to use a conditional operator to find the elements in a vector<int> that have odd value and double the value of each such element. 

* __22:__ Extend the program that assigned high pass, pass, and fail grades to also assign low pass for grades between 60 and 75 inclusive. Write two versions: One version that uses only conditional operators; the other should use one or more if statements. Which version do you think is easier to understand and why? 


* __23:__ The following expression fails to compile due to operator precedence. Using Table 4.12(p. 166), explain why it fails. How would you fix it?
```c++
	string s = "word";
	string pl = s + s[s.size() -1] == 's' ? "" : "s" ;
```
* __24:__ Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative. 

* __25:__ What is the value of ~'q' << 6 on a machine with 32-bit ints and 8 bit chars, that uses Latin-1 character set in which 'q' has the bit pattern 01110001?

* __26:__ In our grading example in this section, what would happen if we used unsigned int as the type for quiz 1?


* __27:__ What is the result of each of these expressions?
	+ (a) ul1 & ul2
	+ (b) ul1 | ul2 
	+ (c) ul1 && ul2
	+ (d) ul1 || ul2

* __28:__ Write a program to print the size of each of the built-in types.
* __29:__ Predict the output of the following code and explain your reasoning. Now run the program. Is the output what you expected? If not, figure out why?
```c++
	int x[10]; 
	int*p = x;

	cout << sizeof(x)/sizeof(*x) << endl;
	cout << sizeof(p)/sizeof(*p) << endl;
```
* __30:__ using table 4.12 (p. 166), parenthesize the following expressions to match the default evaluation:
	+ (a) sizeof x + y
	+ (b) sizeof p->mem[i]
	+ (c) sizeof a < b
	+ (d) sizeof f()

* __31:__ The program in this section used the prefix increment and decrement operators. Explain why we uses prefix and not postfix. What changes would have to be made to use the postfix versions? Rewrite the program using postfix operators. 

* __32:__ Explain the following loop.
```c++

	consexpr int size = 5;
	int ia[size] = {1,2,3,4,5};
	for(int *ptr = ia, ix = 0; ix != size && ptr != ia+size; ++ix, ++ptr)
	{/*...*/}
```
* __34:__ Using table 4.12(p.166) explain what the following expression does:
	`someValue ? ++x, ++y : --x, --y `

* __35:__ Given the variable definitions in this section, explain what conversions take place in the following expressions:
	+ (a) if (fval) 
	+ (b) dval = fval + ival; 
	+ (c) dval +ival *cval;
	Remember that you may need to consider the associativity of the operators.

* __36:__ Given the following definitions.
	char cval; 
	int ival;
	unsigned int ui;
	float fval;
	double dval;

	identify the implicit type conversions, if any, taking place:

	+ (a) cval = 'a' + 3;
	+ (b) fval = ui - ival * 1.0;
	+ (c) dval = ui * fval;
	+ (d) cval = ival + fval + dval;

* __37:__ Assuming is is an int, and d is a double write the expression i*=d so that it does integral, rather than floating-point multiplication.

* __38:__ Rewrite each of the following old-style casts to use a named cast:
	+ (a) pv = (void*)ps;
	+ (b) i = int(*pc);
	+ (c) pv = &d;
	+ (d) pc = (char*) pv;

```c++
	int i;
	double d;
	const string *ps;
	char *pc;
	void *pv;
```
