#include <iostream>
int main()
{
  std::cout << "/*";                //prints "/*"
  std::cout << "*/";                //prints "*/"
//std::cout << /* "*/" */;        //illegal, " missing between / & ;
  std::cout << /* "*/" */";         //now prints  " */"
  std::cout << /* "*/" /* "/*" */;  //prints      " /* "
  return 0;
}