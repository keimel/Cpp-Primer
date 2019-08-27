/*
[3.4]Write a program to read two strings and report whether the
strings are equal. If not, report which of the two is larger(dictionary-wise).
Now, change the program to report whether the strings have the same length, and if
not, report which is longer
*/

#include <iostream>
#include <string>

int main()
{
        std::string str1, str2;
        //variant 1
        while(std::cin >> str1 >> str2){
                if(str1 == str2)
                        std::cout << "equal." << std::endl;
                else if(str1 < str2)
                        std::cout << "Second is larger" << std::endl;
                else    std::cout << "First is larger" << std::endl;
        }
        return 0;
        
        //variant 2
        while(std::cin >> str1 >> str2){
                if(str1.size() == str2.size())
                        std::cout << "Same size." << std::endl;
                else if(str1.size() < str2.size())
                        std::cout << "Second is longer" << std::endl;
                else    std::cout << "First is longer" << std::endl;
        }
        return 0;
}
