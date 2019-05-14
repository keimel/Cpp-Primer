/*
[2.36]In the following code, determine the type of each variable
and the value each variable has when the code finishes
*/
#include <iostream>

int main()
{
  int a = 3, b = 4;
  decltype(a) c = a;    //'c' has the same type/value as 'a'
  decltype((b)) d = a;  //'d' is a int type like 'b' and a reference to 'a'
  ++c;
  ++d;  //means ++a
  //returns: a = 4, b = 4, c = 4, d = 4
  std::cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\nd = " << d << std::endl;
  
/*
[2.37]Assignment is an example of an expression that yields a
reference type. The type is a reference to the type of the left-hand operand.
That is, if i is an int, then the type of the expression i = x is int&. Using
that knowledge, determine the type and value of each variable in this code
*/{
  int a = 3, b = 4;
  decltype(a) c = a;
  decltype(a = b) d = a; //d is an int& initialized to a = 3
  std::cout << "d = " << d << std::endl;
  }
  return 0;
}
/*
[2.38]Describe the differences in type deduction between
decltype and auto. Give an example of an expression where auto and
decltype will deduce the same type and an example where they will deduce
differing types.

auto:

decltype:
*/
