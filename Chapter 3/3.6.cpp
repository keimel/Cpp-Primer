/*
[3.6]Use a range for to change all the characters in a string to X
*/

#include <iostream>
#include <string>

int main()
{       //need a String to create input text & a String to print the final result
        std::string str, strOut;
        std::cout << "Input a String and be witness to magic!" << std::endl;
        //as long as Stings are given/typed
        while(std::cin >> str){
        //go thru each string and change all charachters to X    
                for(auto &c: str){
                        c = 'X';
                }
                // add the changes + a whitespace to the final String
                strOut += str + " ";
        }
        std::cout << "Your String became " << strOut << std::endl;
        return 0;
}
