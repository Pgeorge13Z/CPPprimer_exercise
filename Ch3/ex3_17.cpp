#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s1;
    vector<string> Str;
    while (cin >> s1)
    {
        Str.push_back(s1);
    }
    for (auto &i : Str)
    {
        for (auto &ix : i)
            ix = toupper(ix);
    }
    for (auto i : Str)
        cout << i << endl;
    return 0;
}