#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item item1,item2;
    cin>>item1>>item2;
    if(compareIsbn(item1,item2))
    {
        cout<<item1+item2<<endl;
        return 0;
    }
    else
    {
        cerr<<"input must be the same"<<endl;
        return -1;
    }
}