#include <iostream>

using namespace std;

int main()
{
    char input;
    int a=0,e=0,i=0,o,u;
    while(cin>>input)
    {
        if(input=='a')
            a++;
        else if(input=='e')
            e++;
        else if(input=='i')
            i++;
    }
    cout<<"a: "<<a<<" "<<"e: "<<e<<" "<<"i: "<<i<<endl;
}