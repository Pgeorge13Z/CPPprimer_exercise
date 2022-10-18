#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    ((a > b) && (b > c) && (c > d)) ? cout << "Y" : cout << "N";
}