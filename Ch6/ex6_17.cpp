#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool judge(const string s)
{
    for(auto beg=s.begin(); beg<s.end();beg++)
        {
            if (isupper(*beg))
                return true;
        }
    return false;
}

void change(string &s)
{
    for(auto beg=s.begin(); beg<s.end();beg++)
        (*beg)=tolower(*beg);
}


void changea(string &s)
{
	for (string::size_type i = 0; i != s.size(); ++i)
		s[i] = tolower(s[i]);
}

int main()
{
    string str = "ABCdef";
    cout<<((judge(str))? "isupper":"no upper")<<endl;
    change(str);
    cout<<str;
    cout<<((judge(str))? "isupper":"no upper")<<endl;
}