#Chapter 2 Answers
____________
* __1:__
	 + unsigned can be any number including zero or greater. 
	 + signed can have negative and positive values. 
	 + float single precision floating-point 6 significant digits
	 + double double-precision floating-point 10 significant digits

```c++
	int       = 16 bits
    long 	  = 32 bits
	long long = 64 bits
	short     = 8 bits  
```


* __2:__ double rate, principal, and payment.  I choose double because of the precision that would be needed. Float would work but the computation cost is minimal.

* __3:__  
	+ 32
	+ 4,294,967,264
	+ 32
	+ -32
	+  0
	+  0

* __5:__ 
	+ (a) char, wide char, string, wide char. 
	+ (b) int,  unsigned int, long int,  unsigned long int, int, int
	+ (c) float, float, long double
	+ (d) int, unsigned int, float, float

* __6:__ The second definitions, would have those being declared as an octal number.  But 09 is illegal, and it therefore the program would not compile. 

* __7:__ 
	+ (a) Represents a string, has type String
	+ (b) Long Double
	+ (c) Float
	+ (d) Long Double

* __9:__ 
	+ (a) Illegal. Memory has not been set aside for the variable to store the value yet. Correct by declaring the variable before trying to read it in. 
	+ (b) legal, just converting a double to an int.
	+ (c) Illegal, wage is "undeclared." You can fix it by adding a comma.
	+ (d) legal, it is just converting a double to an int. 

* __10:__ The Initial values would be garbage.  There is no way to know what the variables will hold since they are uninitialized. 

* __11:__ A and B are declarations of a definition. C however is not, because it uses the extern keyword and is not initialized. 

* __12:__ B and E are the only correct identifiers all the others are incorrect. 

* __13:__ The output of J will be 100.

* __14:__ The program is legal the sum will be 45. 

* __15:__ A and C are Valid, B and D are in valid. 

* __16:__ A is valid and assigns 3.14159 to the double d.  B and D are invalid.  C is valid but data will be lost 

* __17:__ The Code will print out 10 10. 


* __19:__ References are not objects, they do not have addresses. Pointers can be assigned and copied.

* __21:__ It will multiply 42 times 42. 

* __22:__ The first statement will always be true, while the second statement has a chance of being 0.

* __23:__ Not possible. Also you do not want to check where your pointer comes from because you should know where it comes from. 

* __24:__ P is legal because it is a void pointer and that can be what it needs to be.  lp is not legal because  it is a long pointer trying to be assigned to an int.  Type mismatch. 

* __25:__ Yep
	+ (a) ip is a pointer to an int, i is an int, and r is a reference to an i. 
	+ (b) i ins and int, ip is a pointer to an int, set to null.
	+ (c) ip is a pointer to an int, and ip2 is an int. 

* __26:__  
	+ (a) is illegal because buf is not initialized. 
	+ (b) legal statement
	+ (c) Legal since be initialized cnt
	+ (d) ++cnt is legal, ++sz is not because it is a const. 

* __27:__
	+ (a) Illegal reference is not an object. 
	+ (b) Illegal i2 is undefined. 
	+ (c) Legal, we can bind a reference to const to a nonconst object like a literal. 
	+ (d) Illegal i2 is undefined. 
	+ (e) Illegal i2 is undefined
	+ (f) Illegal *p3 is not initialized. 
	+ (g) Legal, we have conts ints, being initialized. 

* __28:__
	+ (a) Illegal const object not initilized
	+ (b) Illegal const object not initilized
	+ (c) Illegal const object not initilized
	+ (d) Illegal const object not initilized
	+ (e) Legal

* __29:__
	+ (a) Legal, ic is a const, i is not. 
	+ (b) Illegal, conversions from an int pointer to a const in const pointer. 
	+ (c) Illegal, can not convert from an int pointer to a const int pointer. 
	+ (d) Illegal can not assign a value to a const. 
	+ (e) Illegal can not assign a value to a const. 
	+ (f) Illegal can not assign a value to a const. 

* __30:__
	+ Can not change v2 it is a Top level const. 
	+ p2 is low level
	+ p3 is top level

* __31:__
	+ r1 = v2 is legal
	+ p1 = p2 is not legal
	+ p1 = p3 is not legal
	+ p2 = p1 is legal
	+ p2 = p3 is legal

* __32:__ 
 	+ Not legal
 	```c++
 		int null, *p;
		null = 0;
		p = &null;
	```
* __33:__ 
```c++
	a is an int so a = 42
	b is an int so b = 42
	c is an int so c = 42
	d is an int pointer can not assign a int value to a int pointer. 
	e is a const int pointer, and can not be assigned a int value. 
	g You can not assign a variable to a const. 
```
* __36:__ 
```c++
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a
	++c;
	++d;
	//c will equal 4, 
	//d will be 4 
```
* __37:__ 
```c++
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;
	//c will be an int and initialized to 3
	//d will be an int and initialized to 3
```

* __38:__ decltype depends on the form of its given expression.  When we apply decltype to a variable without any parentheses, we get the type of that variable. If we wrap the variable's name in one or more sets of parentheses, the compiler will evaluate the operand as an expression.

