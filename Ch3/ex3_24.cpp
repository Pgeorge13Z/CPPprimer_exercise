#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> digit;
    int dig;
    while(cin>>dig)
        digit.push_back(dig);
    
    for(auto it=digit.begin();it!=digit.end()-1;it++)
        cout<<*it+(*(it+1))<<" ";
        cout<<endl;
    
    auto it1=digit.begin();
    auto it2=digit.end()-1;
    while(it1<=it2)
        {
        cout<<*it1+*it2<<" ";
        it1++;
        it2--;
        }   
    cout<<endl;
    for(decltype(digit.size())i=0;i<digit.size()-1;i++)
        cout<<digit[i]+digit[i+1]<<" ";
    cout<<endl;
    for(decltype(digit.size())i=0;i<=digit.size()/2;i++)
        cout<<digit[i]+digit[digit.size()-i-1]<<" ";
    return 0;
}