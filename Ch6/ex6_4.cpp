 #include <iostream>

using namespace std;

int fact(int n)
{
        return (n > 1) ? (n * fact(n - 1)) : 1;
}

void interactive_fact()
{
    const string prompt ="Enter a number within[0,16] \n";
    const string out_of_range="Out of range,try again";
    int n;
    cout<<prompt;
    while(cin>>n)
    {
        if(n>=0 && n<=16)
        {
            cout<<fact(n)<<endl;
            cout<<prompt<<endl;   
        }  
        else
            cout<<out_of_range<<endl;
    }
}



int main()
{
    interactive_fact();
    return 0;
}