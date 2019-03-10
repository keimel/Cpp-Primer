/*
*[2.5]
*(a) 'a', L'a', "a", L"a"         //1.char 2.wchar_t 3.String 4.wchar_t
*(b) 10, 10u, 10L, 10uL, 012, 0xC //1.int 2.unsigned 3.long 4.unsigned long 5.int(0 prefix=octal) 6.int(0x prefix=hexadicimal)
*(c) 3.14, 3.14f, 3.14L           //1.double 2.float 3.long double
*(d) 10, 10u, 10., 10e-2          //1.int 2.unsigned 3.double 4.double
*
*[2.6]
*int month = 9, day = 7;
*int month = 09, day = 07;
*The first statement initializes decimal integers and the second octal integers,
*The second statement will error because 9 is not a octal value!
*
*[2.7]
*(a) "Who goes with F\145rgus?\012" //"Who goes with Fergus?"+newline
*                                     \145='e', \012=newline, type String
*(b) 3.14e1L //31.4, type long double
*(c) 1024f   //error: missing .
*(d) 3.14L   //3.14, type long double
*/
#include <iostream>
int main()
{
  std::cout << "\62\t\115\12" << std::endl;
  return 0;
}