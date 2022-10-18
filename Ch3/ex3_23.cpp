#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> digit;
    int dig;
    for (int i=0;i<10;i++)
        {
            cin>>dig;
            digit.push_back(dig);
        }
    for (auto it=digit.begin(); it!=digit.end(); it++)
    {
        *it *= *it;
        cout<<*it<<" ";
    }
    return 0;
}