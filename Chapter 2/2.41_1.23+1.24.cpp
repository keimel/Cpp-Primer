/*
[2.41] Use your Sales_data class to rewrite the exercises in 
§1.5.1 (1.20-1.22), § 1.5.2 (1.23+1.24), and § 1.6 (p. 25). For now, you should 
define your Sales_data class in the same file as your main function.
*/
//[*1.23+1.24]

#include <string>
#include <iostream>

struct My_sales_data 
{
        std::string titel;
        std::string isbn;
        unsigned units = 0;
        double price = 0.0;
        double revenue = 0.0;
};
int main(){
        My_sales_data s_item, c_item;
                               
        if(std::cin >> s_item.isbn >> s_item.units >> s_item.price){            //if there is imput, the program starts
                s_item.revenue = s_item.units*s_item.price;                     //creates a saved item as reference
                double avrg;
                unsigned trans_count = 1;
                
                while(std::cin >> c_item.isbn >> c_item.units >> c_item.price)  //looping as long as input streams
                {
                        c_item.revenue = c_item.units*c_item.price;
                                                
                        if(s_item.isbn == c_item.isbn){                         //isbn equality check
                                s_item.units += c_item.units;
                                s_item.revenue += c_item.revenue;
                                avrg = s_item.revenue/s_item.units;
                                ++trans_count;
                        }else{
                                std::cout << "Registered transactions for " << s_item.isbn << ": " << trans_count << "." << std::endl;
                                s_item = c_item;
                                trans_count = 1;
                        }            
                }                
                std::cout << "Registered transactions for " << s_item.isbn << ": " << trans_count << "." << std::endl;  //returns the last input
        }
        return 0;
}
