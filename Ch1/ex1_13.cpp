#include <iostream>
using namespace std;

int main()
{
    cout << "please input two integers" << endl;
    int start, end, tmp, val;
    cin >> start >> end;
    if (start > end)
    {
        tmp = start;
        start = end;
        end = tmp;
    }
    for(int val=start;val<=end;val++)
        cout<<val<<" ";
    cout<<endl;
    return 0;
}