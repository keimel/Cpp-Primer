#include <iostream>
int main()
{
  std::cout << "Enter two integers: ";
  int i1 = 0, i2 = 0;
  std::cin >> i1 >> i2;
  std::cout << " " << std::endl; //empty line for readability
  if(i1 < i2) 
  {
    while(i1 <= i2)
    {
      std::cout << i1 << std::endl;
      i1++;
    }
    return 0;
  }
  if(i2 < i1)
  {
    while(i2 <= i1)
    {
      std::cout << i2 << std::endl;
      i2++;
    }
    return 0;
  }
  if(i1 == i2)
  {
    std::cout << "The given integers are the same?" << std::endl;
    return 0;
  }
}
