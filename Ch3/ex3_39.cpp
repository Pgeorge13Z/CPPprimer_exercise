#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s1="stringone";
    string s2="stringt";
    if(s1==s2)
        cout<<"same string"<<endl;
    else if(s1>s2)
        cout<<s1<<">"<<s2<<endl;
    else
        cout<<s1<<"<"<<s2<<endl;
    
    const char ca1[]="str";
    const char *ca2="stringtt";
    auto result=strcmp(ca1,ca2);
    if(result==0)
        cout<<"same string"<<endl;
    else if(result>0)
        cout<<ca1<<">"<<ca2<<endl;
    else
        cout<<ca1<<"<"<<ca2<<endl;
}