#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    vector<int> vec{10,20,30,40};
    int arr[4];
    for (int i=0;i<vec.size();i++)
        arr[i]=vec[i];
    for(auto i : arr)
        cout<<i<<" ";
    return 0;
}