#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item saved_book, curr_book;
  if(std::cin >> saved_book)
  {
    int trans_count = 1;
    while(std::cin >> curr_book)
    {
      if(saved_book.isbn() == curr_book.isbn())
      {
        ++trans_count;
      }
      else
      {
        std::cout << "Registered transactions for " << saved_book.isbn() << ": " << trans_count <<
        "." << std::endl;
        saved_book = curr_book;
        trans_count = 1;
      }
    }
    std::cout << "Registered transactions for " << saved_book.isbn() << ": " << trans_count <<
    "." << std::endl;
  }
  return 0;
}