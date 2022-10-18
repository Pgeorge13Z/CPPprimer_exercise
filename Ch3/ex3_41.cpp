#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[]={0,1,2,3,4};
    vector<int> vec(begin(arr),end(arr));
    for (auto i : arr)
        cout<<i<<" ";
    return 0;
}