/*
[2.32]Is the following code legal or not? If not, how might you
make it legal?
*/
#include <iostream>

int main()
{
  int null = 0, *p = &null;
  std::cout << null << '\t' << &null << '\n' << *p << '\t' << p << std::endl;
  return 0;
}
