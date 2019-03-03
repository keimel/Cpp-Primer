#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item curr_book, saved_book;
  std::cin >> saved_book;
  while(std::cin >> curr_book)
  {
    if(saved_book.isbn() == curr_book.isbn())
    {
      saved_book += curr_book;
    }
    else
    {
      std::cout << saved_book << std::endl;
      std::cerr << "ISBN not suitable." <<std::endl;
      return -1;
    }
  }
  std::cout << saved_book << std::endl;
  return 0;
}