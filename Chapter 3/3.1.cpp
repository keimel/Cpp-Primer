#include <iostream>
#include "My_sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
        My_sales_data total; // variable to hold data for the next transaction
        // read the first transaction and ensure that there are data to process
        if (cin >> total.isbn >> total.units >> total.price) {
                total.revenue = total.units*total.price;
                double avrg;

                My_sales_data trans; // variable to hold the running sum
                // read and process the remaining transactions
                while (cin >> trans.isbn >> trans.units >> trans.price) {
                        trans.revenue = trans.units*trans.price;
                        // if we're still processing the same book
                        if (total.isbn == trans.isbn){
                        total.units += trans.units;
                        total.revenue += trans.revenue;
                        avrg = total.revenue/total.units; // update the running total
                        } else {
                        // print results for the previous book
                        cout << total.isbn <<" "<< total.units <<" "<< total.revenue <<" "<< avrg << endl;
                        total = trans; // total now refers to the next book
                        }
                }
                cout << total.isbn <<" "<< total.units <<" "<< total.revenue <<" "<< avrg << endl; // print the last transaction
        } else {
                // no input! warn the user
                cerr << "No data?!" << endl;
                return -1;
        }
        return 0;
}
