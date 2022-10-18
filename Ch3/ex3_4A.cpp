#include <iostream>
#include <string>

using namespace std;

// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     if (s1 == s2)
//         cout << s1 << endl;
//     else
//     {
//         if(s1>s2)
//             cout<<s1<<endl;
//         else
//         {
//             cout<<s2<<endl;
//         }
//     }
//         return 0;
// }

int main()
{
    string s1,s2;
    while (cin>>s1>>s2)
    {
        if(s1==s2)
            cout<<"the two strings are equal"<<endl;
        else
            cout<<"the larger is "<<((s1>s2)?s1:s2)<<endl;
    }
    return 0;
}