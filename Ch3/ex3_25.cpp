#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> scores(11,0);
    unsigned grade;
    while(cin>>grade)
    {
        if(grade<=100)
            (*(scores.begin()+grade/10))++;
    }
    for (auto i:scores)
        cout<<i<<" ";
    return 0;
}