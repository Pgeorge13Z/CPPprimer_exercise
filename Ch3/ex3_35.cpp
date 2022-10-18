#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    // for (int *i=begin(arr); i<end(arr);i++)
    // {
    //     *i=0;
    // }
    for (auto &i:arr)
        i=0;
    for (auto j:arr)
        cout<<j<<" ";
    return 0;
}