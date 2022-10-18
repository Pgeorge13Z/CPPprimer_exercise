#include <iostream>
#include <string>

using namespace std;



int main()
{
    string s1,s2;
    while (cin>>s1>>s2)
    {
        if(s1.size()==s2.size())
            cout<<"the two strings have the same length"<<endl;
        else
            cout<<"the longer is "<<((s1.size()>s2.size())?s1:s2)<<endl;
    }
    return 0;
}