#include <iostream>

using namespace std;

void swap(int *a,int *b)
{
    int x;
    x=*a;
    *a=*b;
    *b=x;
}


int main()
{
    cout<<"Enter two integer"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"Before: a: "<<a<<" b: "<<b<<endl; 
    swap(a,b);
    cout<<"After: a: "<<a<<" b: "<<b<<endl; 
    return 0;
}