#include <iostream>

using namespace std;

int fact(int n)
{
    if (n < 0)
    {
        runtime_error err("input cannot be a negative number");
        cout << err.what();
    }
        return (n > 1) ? (n * fact(n - 1)) : 1;
}

int main()
{
    cout << "Enter a number";
    int n;
    cin >> n;
    cout << fact(n);
}