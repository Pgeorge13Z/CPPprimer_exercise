#include <iostream>

using namespace std;

int main()
{
    const char ca[]={'h','l','l'};
    const char *cp=ca;
    while(*cp)
    {
        cout<<*cp<<endl;
        ++cp;
    }
}