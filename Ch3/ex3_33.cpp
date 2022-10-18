#include <iostream>

using namespace std;

int main()
{
    unsigned scores[11];
    unsigned grade;
    while (cin >> grade)
        ++scores[grade/10];
    for (auto i:scores)
        cout<<i<<" ";
    return 0;
}