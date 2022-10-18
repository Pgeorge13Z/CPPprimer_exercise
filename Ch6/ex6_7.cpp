#include <iostream>

using namespace std;

int func()
{
    static int n=0;   
    return n++; ;

}

int main()
{
    for( int i=0;i<10;i++)
        cout<<func()<<" ";
    return 0;
}