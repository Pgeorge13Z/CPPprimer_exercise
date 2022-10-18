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
    using typ1=int[4];
    using typ2=int;
    for (typ1 (&i) : ia)
        {
            for (typ2 &j : i)
                cout<<j<<" ";
            cout<<endl;
        }
    cout<<"----------------------------"<<endl;

    for(typ1 (*i) =ia; i<ia+3; i++)
    {
        for (typ2 *j =*i; j<*i+4;j++)
            cout<<*j<<" ";
        cout<<endl;
    }
    cout<<"---------------------------"<<endl;
    for (typ2 i=0;i<3;i++)
    {
        for (typ2 j=0;j<4;j++)
            cout<<ia[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}