/*
[3.14]Write a program to read a sequence of Strings from cin and
store those values in a vector
*/

#include <iostream>
#include <vector>
#include <string>

int main()
{       
        std::vector<std::string> v;
        std::string element;
        
        std::cout << "Push Strings into a vector." << std::endl;
        
        while(std::cin >> element)
               v.push_back(element);  
               
        for(unsigned i = 0; i < v.size(); ++i){
               std::cout << v.at(i) << '\0';
        }
        return 0;
}
