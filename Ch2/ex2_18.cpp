#include <iostream>
using namespace std;

int main()
{
    int temp=1234;
    int *ptr = &temp;
    cout<<"before change: ptr = "<<*ptr<<" temp = "<<temp<<endl;
    cout<<"-------------change ptr--------------"<<endl;
    *ptr=121;
    cout<<"after change: ptr = "<<*ptr<<" temp = "<<temp<<endl;
    ptr=&temp;
    cout<<"-------------change temp--------------"<<endl;
    temp=222;
    cout<<"after change: ptr = "<<*ptr<<" temp = "<<temp<<endl;
    return 0;
}

