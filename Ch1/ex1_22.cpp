#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item sum;
    for(Sales_item item;cin>> item;cout<<item<<endl)
    {
        sum+=item;
    }
    cout<<sum;
    return 0;
}