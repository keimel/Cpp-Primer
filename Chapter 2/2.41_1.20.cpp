/*
[2.41] Use your Sales_data class to rewrite the exercises in 
§1.5.1 (1.20-1.23), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should 
define your Sales_data class in the same file as your main function.
*/
//[*1.20]

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
        My_sales_data item;
        while(std::cin >> item.isbn >> item.units >> item.price)
        {
                item.revenue = item.units*item.price;
                double avrg = item.revenue/item.units;
                std::cout << item.isbn <<" "<< item.units <<" "<<
                item.revenue <<" "<< avrg << std::endl;
        }
  return 0;
}
