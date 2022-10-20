#include <iostream>

using namespace std;

int compare(int &a, int * b)
{
    return (a > *b)? a : *b ;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"the large is "<<compare(a,&b)<<endl;
    return 0;
}