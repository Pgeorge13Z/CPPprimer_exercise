#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    for (int i=0;i<10;i++)
        arr[i]=i;
    int arr2[10];
    for (int i=0;i<10;i++)
        arr2[i]=arr[i];
    for (auto i : arr2)
        cout<<i<< " "; 
}