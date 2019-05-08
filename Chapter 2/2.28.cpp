/*
[2.28]Explain the following definitions. Identify any that are illegal.
*/
#include <iostream>

int main()
{
//illegal: a const pointer has const/unchangable memory adress, so it must be initialized
//tries to define an int object "i" and a const pointer "cp" to int
/*a*/int i, *const cp;

//illigal: trying to define objects without type
//define pointer pi and const pointer p2 to a missing type
/*b*/*pi, *const p2;

//illigal: const int object ic, which must have an unchangable value, is not initialized
//define const int object ic and reference r to const int  pointing at ic
/*c*/const int ic, &r = ic;

//illigal: const pointer not initialized
//define a const pointer p3 to const int, which means that the memory adress as well as the value linked to it are not changable with p3
/*d*/const int *const p3;

//legal: defines pointer p to const int; if a memory adress is assigned to p, one cannot change the linked data
/*e*/const int *p;
}
