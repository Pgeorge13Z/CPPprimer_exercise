#include <iostream>
#include <vector>

using namespace std;

bool jugvec(vector<int> & vect1,vector<int> & vect2)
{
    if(vect1.size()>vect2.size())
        return(jugvec(vect2,vect1));
    else
        for(auto i=vect1.begin(),j=vect2.begin();i<vect1.end();i++,j++)
            {
                if((*i)!=(*j))
                    return false;
            }
    return true;
}


int main()
{
    vector<int> vec1={0,1,1,2};
    vector<int> vec2{0,1,1,2,3,5,8};
    vector<int> vec3{1,2,3,4};
    // if(jugvec(vec1,vec2))
    //     {
    //         cout<<"contain"<<endl;
    //         return 0;
    //     }
    // else
    //     {
    //         cout<<"no contain"<<endl;
    //         return -1;
    //     }
    cout<<((jugvec(vec1,vec2))? "contain":"no contain")<<endl;

}