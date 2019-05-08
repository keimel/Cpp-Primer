/*
[2.27]Which of the following initializations are legal? Explain why.
*/
#include <iostream>

int main()
{
      int i2;
//illigal, reference must refere to an existing object
/*a*/// int i = -1, &r = 0;

//legal if i2 was defined
/*b*/ int *const p2 = &i2;
      std::cout << p2 << std::endl;
      
//legal:"we can bind a reference to const to a nonconst object, a literal, or a more general expression"
/*c*/ const int i = -1, &r = 0;
      std::cout << i << '\t' << r << std::endl;
      
//legal if i2 was defined
/*d*/ const int *const p3 = &i2;
      std::cout << p3 << std::endl;
      
//legal if i2 was defined
/*e*/ const int *p1 = &i2;
      std::cout << p1 << std::endl;
      
//illigal, only objects can be const; reference is not an object
/*f*/// const int &const r2;

//legal if i was defined 
/*g*/ {const int i2 = i, &r = i;
       std::cout << i2 << '\t' << r << std::endl;
      }
 return 0;
}
