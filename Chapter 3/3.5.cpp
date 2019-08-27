/*
[3.5]Write a program to read strings from the standard input,
concatenating what is read into one large string. Print the concatenated
string.
Next, change the program to separate adjacent input strings by a space
*/

#include <iostream>
#include <string>

int main()
{
        std::string str1 ,str2;
        //variant 1
        if(std::cin >> str1){
                while(std::cin >> str2){
                        str1 += str2;
                }
                std::cout << str1 << std::endl;
        }
        return 0;
        
        //variant 2
        if(std::cin >> str1){
                while(std::cin >> str2){
                        str1 += " " + str2;
                }
                std::cout << str1 << std::endl;
        }
        return 0;
}
