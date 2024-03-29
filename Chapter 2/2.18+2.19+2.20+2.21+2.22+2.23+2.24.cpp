//[2.18]Write code to change the value of a pointer.
//Write code to change the value to which the pointer points.
#include <iostream>

int main()
{
  int i = 0, *pi = &i, j;
  char c;
  std::cout << "i = "<<i<<"\tpi = &i = "<<pi
            <<"\nType Integer to change pointer adress.\n" << std::endl;
  std::cin >> j;
  pi = &j;
  std::cout << "pi = "<< pi 
            << "\nNow type a value you want to place for i\n" << std::endl;
  std::cin >> j;
  *pi = j;
  std::cout << "i = " << *pi << '\n' <<std::endl; 
  return 0;
}
/*[2.19]Explain the key differences between pointers and references.
Reference:
Are not objects
A reference absolutely tied to the object it points at
Must be initialized from the start

Pointer:
Is an object
Can point to many different objects during its lifetime
Doesn't have to be initialized from the start

[2.20]What does the following program do?
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;
The program initializes an int object i and pointer p1 to 42 and the adress of i
respectivly. With the Dereference operator(*) p1 access the value of i and assignes
it the value i*i: 42*42

[2.21]Explain each of the following definitions.
Indicate whether any are illegal and, if so, why.
int i = 0;
(a) double* dp = &i; //illegal, type must be the same
(b) int *ip = i;     //illegal, & operator before i is missing: int *ip = &i
(c) int *p = &i;     //legal, defines a pointer p to int and initialize it to point at the adress of i

[2.22]Assuming p is a pointer to int, explain the following code:
if (p) // ... same as with integer literals; 0 = false, nonzero = true
if (*p) // ...  if the object p points to is zero, condition is false and if nonzero, true
The pointer must be initialized to be valid or the condition evaluates to undefined

[2.23]Given a pointer p, can you determine whether p points to a valid object?
If so, how? If not, why not?


[2.24]Why is the initialization of p legal but that of lp illegal?
int i = 42;
void *p = &i;
long *lp = &i;
Because the types of i and lp are different (int and long respectivly) and p is a
type *void pointer, which can hold any objects adress.
*/
