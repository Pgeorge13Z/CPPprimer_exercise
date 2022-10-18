#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int a,b;

    cin>>a>>b;
    if(b==0)
        throw runtime_error("B shouldn't be 0!");
    cout<<a/b<<endl;
    return 0;
}