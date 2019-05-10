/*
[2.35]Determine the types deduced in each of the following
definitions. Once you’ve figured out the types, write a program to see
whether you were correct.
*/
#include <iostream>
#include <typeinfo>

int main()
{
  const int i = 42;
  
  //j has type int
  auto j = i;
  //k has type const int&
  const auto &k = i;
  //p has type const int*
  auto *p = &i;
  //j2 has type const int and k2 const int&
  const auto j2 = i, &k2 = i;
  
//use typeid to compare object types;
//first generate objects to compare j, k/k2 and p with (i and j2 should have the same type)
  int jc = i;
  const int &kc = i;
  const int *pc = &i;
  
  if(typeid(j) == typeid(jc)){
    std::cout << "Types are identical" << std::endl;
  }else{
    std::cout << "Different types!" << std::endl;
  }
  if(typeid(k) == typeid(kc)){
    std::cout << "Types are identical" << std::endl;
  }else{
    std::cout << "Different types!" << std::endl;
  }
  if(typeid(p) == typeid(pc)){
    std::cout << "Types are identical" << std::endl;
  }else{
    std::cout << "Different types!" << std::endl;
  }
  if(typeid(j2) == typeid(i)){
    std::cout << "Types are identical" << std::endl;
  }else{
    std::cout << "Different types!" << std::endl;
  }
   if(typeid(k2) == typeid(kc)){
    std::cout << "Types are identical" << std::endl;
  }else{
    std::cout << "Different types!" << std::endl;
  }

  return 0;
}
