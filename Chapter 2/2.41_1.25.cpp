/*
[2.41] Use your Sales_data class to rewrite the exercises in 
§1.5.1 (1.20-1.22), § 1.5.2 (1.23+1.24), and § 1.6 (1.25). For now, you should 
define your Sales_data class in the same file as your main function.
*/
//[*1.25]

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
int main()
{
        My_sales_data total; // variable to hold data for the next transaction
        // read the first transaction and ensure that there are data to process
        if (std::cin >> total.isbn >> total.units >> total.price) {
                total.revenue = total.units*total.price;
                double avrg;

                My_sales_data trans; // variable to hold the running sum
                // read and process the remaining transactions
                while (std::cin >> trans.isbn >> trans.units >> trans.price) {
                        trans.revenue = trans.units*trans*price
                        // if we're still processing the same book
                        if (total.isbn == trans.isbn){
                        total.units += trans.units;
                        total.revenue += trans.revenue;
                        avrg = total.revenue/total.units; // update the running total
                        } else {
                        // print results for the previous book
                        std::cout << total.isbn <<" "<< total.units <<" "<< total.revenue <<" "<< avrg << std::endl;
                        total = trans; // total now refers to the next book
                        }
                }
                std::cout << total.isbn <<" "<< total.units <<" "<< total.revenue <<" "<< avrg << std::endl; // print the last transaction
        } else {
                // no input! warn the user
                std::cerr << "No data?!" << std::endl;
                return -1; // indicate failure
        }
        return 0;
}
