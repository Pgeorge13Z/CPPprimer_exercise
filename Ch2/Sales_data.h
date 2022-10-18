#ifndef Sale_H
#define Sale_H

#include <string>

struct Sales_data
{
    unsigned units_sold = 0;
    std::string bookNo;
    double revenue=0;
};

#endif