/*
[2.42] Write your own version of the Sales_data.h header and use it to rewrite the exercise from 1.22-1.25
      (The same changes were made for all programs, so I uploaded only this one)
*/
//[*1.25]

#include <iostream>
#include "My_sales_data.h"

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
                        trans.revenue = trans.units*trans.price;
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
                return -1;
        }
        return 0;
}
