#include <string>
#include <iostream>
using namespace std;

struct Sales_data
{
    unsigned units_sold = 0;
    std::string bookNo;
    double revenue=0;
};

int main()
{
    Sales_data total;
    double totalprice;
    if(cin>>total.bookNo>>total.units_sold>>totalprice)
    {
        total.revenue=total.units_sold * totalprice;

        Sales_data temp;
        double tempprice;
        while(cin>>temp.bookNo>>temp.units_sold>>tempprice)
        {
            temp.revenue=temp.units_sold*tempprice;
            if(temp.bookNo==total.bookNo)
            {
                total.revenue+=temp.revenue;
                total.units_sold+=total.units_sold;
                continue;
            }
            else
            {
                cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<endl;
                total.bookNo=temp.bookNo;
                total.revenue=temp.revenue;
                total.units_sold=temp.units_sold;
                totalprice=tempprice;
                continue;
            }
                cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<endl;
                return 0;
        }
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
}
