#include <iostream>

using namespace std;

void Swap(int* &c, int* &d)
{
    int *x;
    x=c;
    c=d;
    d=x;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int *c=&a;
    int *d=&b;
    cout<<*c<<" "<<*d<<endl;
    Swap(c,d);
    cout<<*c<<" "<<*d<<endl;
    return 0;
}