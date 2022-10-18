#include "Chapter6.h"
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





int func()
{
    int n, ret = 1;
    std::cout << "input a number: ";
    std::cin >> n;
    while (n > 1) ret *= n--;
    return ret;
}