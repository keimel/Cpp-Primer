/*
[2.33]Using the variable definitions from this section, determine
what happens in each of these assignments
*/
#include <iostream>

int main()
{
  int i = 0, &r = i;
  const int ci = i, &cr = ci;
  auto a = r;
  auto b = ci;
  auto c = cr;
  auto d = &i; 
  auto e = &ci;
  auto &g = ci;
  
  a = 42;//a has type int and becomes 42
  b = 42;//b has type int and becomes 42
  c = 42;//c has type int and becomes 42
//  d = 42;//d is pointer to int, cannot be assigned a literal
//  e = 42;//e is pointer to const int, cannot be assigned a litteral
//  g = 42;//g is a reference of type const int and cannot be assigned different values
  
  std::cout << a << '\n' << b << '\n' << c << std::endl;
  return 0;
}
