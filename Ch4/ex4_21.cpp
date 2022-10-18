#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num ={1,2,3,4,5,6};
    for(auto &i:num)
        // (i%2==0)? cout<<i<<" " : cout<<2*i<<" ";
        cout<< ((i & 1)? i*2 : i)<<" ";
}