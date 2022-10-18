# include <iostream>
# include <string>
# include <vector>

using namespace std;

int main()
{
    string s1;
    vector<string> digit;
    while (cin>>s1)
    {
        digit.push_back(s1);
    }
    cout<<digit.size()<<endl;
    for (auto i : digit)
        cout <<i<<endl;
    return 0;
}