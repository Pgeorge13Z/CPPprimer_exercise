# include <iostream>
# include <string>

using namespace std;

int main()
{
    string s1("hello word!");
    cout << "before: " <<s1 <<endl;

    decltype(s1.size()) i=0;
    while (i<s1.size())
    {
        s1[i]='X';
        i++;
    }
    i=0;
    cout << "after while: "<<s1<<endl;
    for (i=0;i<s1.size();i++)
    {
        s1[i]='Y';
    }
    cout << "after for: "<<s1<<endl;
    return 0;
}