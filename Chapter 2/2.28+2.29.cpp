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
//define pointer p1 and const pointer p2 to a missing type
/*b*/*p1, *const p2;

//illigal: const int object ic, which must have an unchangable value, is not initialized
//define const int object ic and reference r to const int  pointing at ic
/*c*/const int ic, &r = ic;

//illigal: const pointer not initialized
//define a const pointer p3 to const int, which means that the memory adress as well as the value linked to it are not changable with p3
/*d*/const int *const p3;

//legal: defines pointer p to const int; if a memory adress is assigned to p, one cannot change the linked data
/*e*/const int *p;
}
/*Using the variables in the previous exercise, which of the
following assignments are legal? Explain why.
(a) i = ic;   //legal, because i can have many values during its lifetime
(b) p1 = p3;  //illigal, because p1 has no type
(c) p1 = &ic; //illigal, because p1 has no type
(d) p3 = &ic; //illegal, p3 is a const pointer, so its memory adress doesn't change
(e) p2 = p1;  //illigal, because the memoty adress assigned to p2 is absolute (STILL NO TYPE)
(f) ic = *p3; //illigal, ic is const
*/
