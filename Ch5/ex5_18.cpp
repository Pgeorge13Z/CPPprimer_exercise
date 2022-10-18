#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    string temp;

    cout << "Please enter two strings" << endl;
    do
    {
        cin >> s1 >> s2;
        cout << ((s1.length() < s2.length()) ? s1 : s2) << endl;
        cout << "More?Enter yes or no:";
        cin >> temp;
    } while (!temp.empty() && temp[0] == 'y');
}