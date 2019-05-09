/*
[2.35]Determine the types deduced in each of the following
definitions. Once you’ve figured out the types, write a program to see
whether you were correct.
*/
#include <iostream>

int main()
{
  const int i = 42;
  
  //j has type int
  auto j = i;
  //k has type const int&
  const auto &k = i;
  //p has type const int*
  auto *p = &i;
  //j2 has type const int and k2 const int&
  const auto j2 = i, &k2 = i;
  
  std::cout << "i = " << i << ", &i = " << &i << std::endl; 
  std::cout << j << '\\' << k << '\\' << p << '\\' << j2 << '\\' << k2 <<std::endl;
  

  return 0;
}
