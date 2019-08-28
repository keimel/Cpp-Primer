/*
[3.9]What does the following program do? Is it valid? If not, why not?
*/

#include <iostream>
#include <string>

int main()
{       //string is initialized to empty String
        std::string s;
        //empty String has no length that could be indexed, ergo program is invalid!
        std::cout << s[0] << std::endl;
}
