#include <iostream>

using namespace std;

int main()
{
    int ia[3][4];
    int x=0;
    for (auto &i : ia)
        for (auto &j : i)
        {
            j =x;
            x++;
        }

    for (int (&i) [4] : ia)
        {
            for (int &j : i)
                cout<<j<<" ";
            cout<<endl;
        }
    cout<<"----------------------------"<<endl;
    for(int (*i) [4]=ia; i<ia+3; i++)
    {
        for (int *j =*i; j<*i+4;j++)
            cout<<*j<<" ";
        cout<<endl;
    }
    cout<<"---------------------------"<<endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
            cout<<ia[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}