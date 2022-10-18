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
    for(decltype(digit.size())i=0;i<digit.size()-1;i++)
        cout<<digit[i]+digit[i+1]<<" ";
    cout<<endl;
    for(decltype(digit.size())i=0;i<=digit.size()/2;i++)
        cout<<digit[i]+digit[digit.size()-i-1]<<" ";
    return 0;
}