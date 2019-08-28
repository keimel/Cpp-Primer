/*
[3.8]Rewrite the program in the first exercise[3.6], first using a while
and again using a traditional for loop.
Which of the three approaches do you prefer and why?
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
                
                //while version
                decltype(str.size()) c = 0;
                while(c < str.size()){
                        str[c] = 'X';
                        ++c;
                }
                
                //for version
                for(decltype(str.size()) c = 0; c < str.size(); ++c){
                        str[c] = 'X';
                }
                // add the changes + a whitespace to the final String
                strOut += str + " ";
        }
        std::cout << "Your String became " << strOut << std::endl;
        return 0;
}
//range for looks much cleaner in comparison to the traditional for & while loops
