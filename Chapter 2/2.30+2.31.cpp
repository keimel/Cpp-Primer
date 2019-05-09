/*
[2.30]For each of the following declarations indicate whether the
object being declared has top-level or low-level const.
*/
#include <iostream>

int main()
{
//top-level const
  const int v2 = 0;
  int v1 = v2;
  int *p1 = &v1, &r1 = v1;
//both have low-level const and p3 has top-level const aswell
  const int *p2 = &v2, *const p3 = &i, &r2 = v2;
  
/*
[2.31]Given the declarations in the previous exercise determine
whether the following assignments are legal. Explain how the top-level or
low-level const applies in each case.
*/
r1 = v2;//illigal: a reference has an absolute link to its object, even if v2's const can be ignored
p1 = p2;//illigal: p2's low-level const object cannot be assigned to nonconst int p1
p2 = p1;//legal: nonconst p1 can be converted to const p2
p1 = p3;//illigal: p3's low-level const object cannot be assigned to nonconst p1
p2 = p3;//legal: both are low-level const int objects and p3's top-level const can be ignored
return 0;
}
