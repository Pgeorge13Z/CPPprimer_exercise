#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    for (int i=0;i<10;i++)
        arr.push_back(i);
    vector<int> arr2(10);
    arr2=arr;
    for (auto i : arr)
    cout<<i<< " "; 
    for (auto i : arr2)
    cout<<i<< " "; 
}