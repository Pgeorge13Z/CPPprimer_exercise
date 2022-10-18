# include <iostream>
# include <string>
# include <vector>

using namespace std;

int main()
{
    int dig;
    vector<int> digit;
    while (cin>>dig)
    {
        digit.push_back(dig);
    }
    cout<<digit.size()<<endl;
    for (auto i : digit)
        cout <<i<<endl;
    return 0;
}