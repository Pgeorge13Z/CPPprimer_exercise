#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
    try
    {
        if(b==0)
            throw runtime_error("B shouldn't be 0!");
        cout<<a/b<<endl;
    }
    catch(runtime_error& e)
    {
        std::cerr << e.what() << "\nTry again? Enter y or n"<<endl;
        string reinput;
        cin>>reinput;
        if(reinput.empty() || reinput[0]=='n')
        break;
    }
    
    }


   

    return 0;
}