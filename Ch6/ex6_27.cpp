#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> const &l)
{
    int sum = 0;
    for (auto i : l)
        sum += i;
    return sum;
}

int main()
{
    auto i = {1, 2, 3, 4, 5, 6};
    cout << sum(i) << endl;
    return 0;
}