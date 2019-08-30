/*
[3.14]Write a program to read a sequence of ints from cin and
store those values in a vector
*/

#include <iostream>
#include <vector>

int main()
{       
        std::vector<int> v;
        int element;
        
        std::cout << "Push integer into a vector." << std::endl;
        
        while(std::cin >> element)
               v.push_back(element);  
               
        for(unsigned i = 0; i < v.size(); ++i){
               std::cout << v.at(i) << '\0';
        }
        return 0;
}
