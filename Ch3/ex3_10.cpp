# include <iostream>
# include <string>

using namespace std;

int main()
{
    string s1("hello,word!");
    cout << "before: " <<s1 <<endl;

    decltype(s1.size()) i=0;
    while (i<s1.size())
    {
        if(!ispunct(s1[i]))
            cout<<s1[i];
        i++;
    }
    return 0;
}