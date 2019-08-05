/*
[2.42] Write your own version of the Sales_data.h header and use it to rewrite the exercise from 1.22-1.25
*/

#ifndef MY_SALES_DATA_H
#define MY_SALES_DATA_H
#include <string>

struct My_sales_data 
{
        std::string titel;
        std::string isbn;
        unsigned units = 0;
        double price = 0.0;
        double revenue = 0.0;
};
#endif