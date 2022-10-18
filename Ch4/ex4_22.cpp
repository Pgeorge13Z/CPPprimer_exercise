#include <iostream>

using namespace std;

int main()
{
    unsigned int grade;
    cin>>grade;
    string finalgrade=(grade<60)? "fail" : ((grade>90)? "high pass" : (grade>75)? "pass":"low pass");
    cout<<finalgrade<<endl;
}

