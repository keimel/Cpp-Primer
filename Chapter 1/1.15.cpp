//Now the program is fixed, recreate the errors with the comment if you want
#include <iostream>
// error: missing ) in parameter list for main
int main () {
// error: used colon, not a semicolon, after endl
std::cout << "Read each file." << std::endl;
// error: missing quotes around string literal
std::cout << "Update master." << std::endl;
// error: second output operator is missing
std::cout << "Write new master." << std::endl;
// Type error: initializing integer with abc
int i = 1;
int v1 = 0, v2 = 0;
std::cin >> v1 >> v2; // error: uses "v" not "v1"
// error: cout not defined; should be std::cout
std::cout << v1 + v2 << std::endl;
return 0;
// error: missing ; on return statement
return 0;
}
