#include <iostream>
#include "Sales_item.h"
using namespace std;

//与1_14的区别: 1_23返回的是记录的个数 1_24返回的是每种书的个数

int main()
{
    Sales_item item_tmp;
    int num=1;
    cin>>item_tmp;
    for(Sales_item item;cin>>item;)
    {
        if(item.isbn()==item_tmp.isbn())
        {
            item_tmp+=item;
            continue;
        }
        else
        {
            cout<<" the num of "<<item_tmp.isbn()<<" is "<<item_tmp.units()<<endl;
            item_tmp=item;
            continue;
        }
    }
    cout<<" the num of "<<item_tmp.isbn()<<" is "<<item_tmp.units()<<endl;
    return 0;
}