/*
[3.10]Write a program that reads a string of characters including
punctuation and writes what was read but with the punctuation removed.
*/

#include <iostream>
#include <string>

int main()
{       //need a String to create input text & a String to print the final result
        std::string str, strOut;
        std::cout << "Input a String with punctuation to get one without." << std::endl;
        //as long as Stings are given/typed
        while(std::cin >> str){
        //go thru each string   
                for(char &c: str){
                      //if it's punctuated, change it to whitespace
                        if(ispunct(c))
                               c = '\0';
                }
                // add the changes + a whitespace to the final String
                strOut += str + " ";
        }
        std::cout << strOut << std::endl;
        return 0;
}
