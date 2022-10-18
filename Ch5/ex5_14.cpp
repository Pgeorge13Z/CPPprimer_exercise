#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    string str;
    vector <string> vecstr;
    while(cin>>str)
        vecstr.push_back(str);
    int max=1,count=1;
    string strmax=" ";
    auto beg = vecstr.begin();
    while(beg!=vecstr.end())
        {
            auto tmp=*beg;
            beg++;
            if((*beg)==tmp)
            //if(strcmp((*beg),tmp)==0)
            {
                count++;
            if(count>max)
            {
                max=count;
                strmax=(*beg);
            }
            }
            else 
                count=1;  
        }
    if(max>1)
    {
        cout<<strmax<<" occurs "<<max<<" times "<<endl;
    }
    else
        cout<<"No consecutive words"<<endl;
}