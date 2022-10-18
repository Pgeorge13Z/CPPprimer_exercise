#include <iostream>

using namespace std;

void reset(int &a)
{
    a=0;
}

int main()
{
    cout<<"Enter one integer"<<endl;
    int a;
    cin>>a;
    cout<<"Before: a: "<<a<<endl; 
    reset(a);
    cout<<"After: a: "<<a<<endl; 
    return 0;
}