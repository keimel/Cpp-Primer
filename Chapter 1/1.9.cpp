#include <iostream>
int main()
{
  int sum = 0, val = 50;
  while (val <= 100)
  {
    sum += val;
    val++;
  }
  std::cout << "The sum of all numbers from 50 to 100 is " << sum << std::endl;
  return 0;
}
