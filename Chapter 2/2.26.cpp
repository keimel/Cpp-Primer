/*
[2.26]Which of the following are legal? For those that are illegal, explain why.
*/
#include <iostream>

int main()
{
/*a*/  const int buf; //illigal, const object must be initialized
/*b*/  int cnt = 0;   //legal
/*c*/  const int sz = cnt;  //legal
/*d*/  ++cnt; ++sz;   //illigal, attempt to write to const object
}
