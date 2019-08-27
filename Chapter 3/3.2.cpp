/*
[3.2]Write a program to read the standard input a line at a time.
     Modify your program to read a word at a time
*/

#include <iostream>
#include <string>

int main()
{
        std::string line;
        //variant 1
        while(getline(std::cin, line))
               std::cout << line << std::endl;
        return 0;
        //variant 2
        while(std::cin >> line)
                std::cout << line << std::endl;
        return 0;
}
