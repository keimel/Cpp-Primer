/*
*[2.3]
*unsigned u = 10, u2 = 42;
*std::cout << u2 - u << std::endl; //prints 32
*std::cout << u - u2 << std::endl; //wraps around
*int i = 10, i2 = 42;
*std::cout << i2 - i << std::endl; //prints 32
*std::cout << i - i2 << std::endl; //prints -32
*std::cout << i - u << std::endl;  //prints 0
*std::cout << u - i << std::endl;  //prints 0
*/
#include <iostream>
int main()
{
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl;
  std::cout << u - u2 << std::endl;
  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl;
  std::cout << i - i2 << std::endl;
  std::cout << i - u << std::endl;
  std::cout << u - i << std::endl;
}