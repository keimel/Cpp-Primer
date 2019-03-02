#include <iostream>
int main()
{
  std::cout << "Enter two integers: ";
  int i1 = 0, i2 = 0;
  std::cin >> i1 >> i2;
  std::cout << " " << std::endl; //empty line for readability
  if(i1 < i2) //looks if the first value is smaller 
  {
    for(; i1 <= i2; ++i1)
    {
      std::cout << i1 << std::endl;
    }
    return 0;
  }
  if(i2 < i1) //looks if the second value is smaller
  {
    for(; i2 <= i1; ++i2)
    {
      std::cout << i2 << std::endl;
    }
    return 0;
  }
  if(i1 == i2)
  {
    std::cout << "The given integers are the same?" << std::endl;
    return 0;
  }
}