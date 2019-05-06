/*[2.9]Explain the following definitions. For those that are illegal,
explain what’s wrong and how to correct it.
(a) std::cin >> int input_value;    //error: Uninitialized built-in type 
                                      defined in function body, initialize
                                      before executing function
(b) int i = { 3.14 };               //error: list initialization with loss
                                      of data while type converting will not
                                      compute(int can't hold fraction .14),
                                      use () or delete {}
(c) double salary = wage = 9999.99; //error: wage first must be defined, initialized or  
                                      assigned a value beforehand
(d) int i = 3.14;                   //legal but fraction is lost, i=3   
*/
[2.10]What are the initial values, if any, of each of the following
variables?
std::string global_str;   //initialized to empty String defined by string class
int global_int;           //outside a function: initialized to 0 
int main()
{
  int local_int;          //inside a function: undefined
  std::string local_str;  //initialized to empty String
}
