/*
[3.11]Is the following range for legal? If so, what is the type of c?
*/

#include <string>

int main()
{       
        const string s = "Keep out!";
        //c is a reference to char
        for (auto &c : s) { /* ... */ }
}
