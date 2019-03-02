#include <iostream>
int main () {
  std::cout << "Type numbers to add them together. Type Strg+z or any character to calculate." << std::endl;
  int sum = 0;
  for(int val = 0; std::cin >> val;)
  {
    sum += val;
  }
  if(sum ==0) //If you enter something that is not an integer at the beginning
  {           //the program returns the text in the if body
  std::cout << "Well, that was pointless; If you are surprised, then that means you actually didn't know your sum is 0." << std::endl;
  std::cout << "Congratulations." << std::endl;
  return 0;
  }
  else
  {
  std::cout << "Your sum is " << sum << std::endl;
  return 0;
  }
}