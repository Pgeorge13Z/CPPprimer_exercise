# include <iostream>
# include <string>

using namespace std;

int main()
{
    string s1("hello word!");
    cout << "before: " <<s1 <<endl;
    for (char &c:s1)
        c='S';
    cout << "after: "<<s1<<endl;
    return 0;
}