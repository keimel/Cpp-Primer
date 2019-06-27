/*
[2.41] Use your Sales_data class to rewrite the exercises in 
§1.5.1 (1.20-1.22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should 
define your Sales_data class in the same file as your main function.
*/
//[*1.22]

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
        
        std::cin >> s_item.isbn >> s_item.units >> s_item.price;
        s_item.revenue = s_item.units*s_item.price;
        double avrg;
        while(std::cin >> c_item.isbn >> c_item.units >> c_item.price)
        {
                c_item.revenue = c_item.units*c_item.price;
                
                if(s_item.isbn == c_item.isbn){
                        s_item.units += c_item.units;
                        s_item.revenue += c_item.revenue;
                        avrg = s_item.revenue/s_item.units;
                }else{
                        std::cout << s_item.isbn <<" "<< s_item.units <<" "<< s_item.revenue <<" "<< avrg << std::endl;
                        std::cerr << "ISBN doesn't match!" << std::endl;
                        return -1;
                }            
        }
        std::cout << s_item.isbn <<" "<< s_item.units <<" "<< s_item.revenue <<" "<< avrg << std::endl; //return ISBN, units, revenue, average price per book
        return 0;
}
