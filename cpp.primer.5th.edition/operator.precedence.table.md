Assocciatvity|Operator|Function|Use
:--:|:--:|:--|:--|
**L**|`::`|global scope|`::name`
**L**|`::`|class scope|`class::name`
**L**|`::`|namespace scope|`namespace::name`
**L**|`.`|member selectors|`object.member`
**L**|`->`|member selectors|`pointer->member`
**L**|`[]`|subscript|`expr[expr]`
**L**|`()`|function call|`name(expr .. list)`
**L**|`()`|type construction|`type(expr .. list)`
**R**|`++`|postfix increment|`++lvalue`
**R**|`--`|postfix decrement|`--lvalue`
**R**|`typeid`|type ID|`typeid(type)`
**R**|`typeid`|runtime time ID|`typeid(exp)`
**R**|`explicit cast`|type conversion|`cast_name<type>(expr)`
**R**|`++`|prefix increment|`++lvalue`
**R**|`--`|prefix decrement|`--lvalue`
**R**|`~`|bitwise not|`~expr`
**R**|`!`|logical not|`!expr`
**R**|`-`|unary minus|`-expr`
**R**|`+`|unary plus|`+expr`
**R**|`*`|dereference|`*expr`
**R**|`&`|address of|`&lvalue`
**R**|`()`|type conversion|`(type)expr`
**R**|`sizeof`|size of object|`sizeof expr`
**R**|`sizeof`|size of type|`sizeof(type)`
**R**|`sizeof...`|size of paramenter pack|`sizeof...(name)`
**R**|`new`|allocate object|`new type`
**R**|`new[]`|allocate array|`new type[size]`
**R**|`delete`|delete object|`delete expr`
**R**|`delete[]`|delete array|`delete [] expr`
**R**|`noexcept`|can expr throw|`noexcept(expr)`
**L**|`->*`|ptr to member select|`ptr->*ptr_to_member`
**L**|`.*`|ptr to member select|`obj.*ptr_to_member`
**L**|`*`|multiply|`expr * expr`
**L**|`/`|divide|`expr / expr`
**L**|`%`|modulo|`expr % expr`
**L**|`+`|addition|`expr + expr`
**L**|`-`|subtract|`expr - expr`
**L**|`<<`|bitwise shift left|`expr << expr`
**L**|`>>`|bitwise shift right|`expr >> expr`
**L**|`<`|less than|`expr < expr`
**L**|`<=`|less than equal|`expr <= expr`
**L**|`>`|greater than|`expr > expr`
**L**|`>=`|greater than or equal|`expr >= expr`
**L**|`==`|equality|`expr == expr`
**L**|`!=`|inequality|`expr != expr`
**L**|`&`|bitwise AND|`expr & expr`
**L**|`^`|bitwise XOR|`expr ^ expr`
**L**|<code>&#124;</code>|bitwise OR|<code>expr &#124; expr</code>
**L**|`&&`|logical AND|`expr &&`
**L**|<code>&#124;&#124;</code>|logical OR|<code>expr &#124;&#124; expr</code>
**R**|`?:`|conditional|`expr ? expr : expr`
**R**|`=`|assignment|`lvalue = expr`
**R**|`*=, /=, %=`|compound assign|`lvalue += expr, etc`
**R**|`+=, -=`||
**R**|`<<=, >>=`|
**R**|<code>&=, &#124;=, ^=</code>|
**R**|`throw`|throw exception|`throw expr`
**L**|`,`|comma|`expr,expr`
