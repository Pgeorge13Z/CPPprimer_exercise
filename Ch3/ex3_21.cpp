#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{110,"hi"};

    cout<<"v1 contains "<<v1.size()<<endl;
    for (auto i:v1)
    {
        cout<<i<<endl;
    }

    cout<<"v3 contains "<<v3.size()<<endl;
    for (auto i:v3)
    {
        cout<<i<<" "; 
    }
        cout<<endl;
    
     for (auto i=0;i!=v3.size();i++)
        cout<<v3[i]<<" ";
        cout<<endl;

    for (auto i =v5.cbegin(); i!=v5.cend(); i++)
        cout << *i<<" ";
        cout << endl;
        cout<<*v5.cbegin()<<endl;
        cout <<*v5.cend();
}