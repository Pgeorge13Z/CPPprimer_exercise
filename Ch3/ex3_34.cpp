#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p1 = begin(arr);
    int *p2 = &arr[2];
    cout<<p2-p1<<endl;
    p1 += p2 - p1;
    cout<<*p1;
    return 0;
}