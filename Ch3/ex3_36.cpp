#include <iostream>
#include <vector>

using namespace std;

bool compare(int *pb1,int *pe1,int *pb2,int *pe2)
{
    if((pe1-pb1)!=(pe2-pb2))
        return false;
    else 
    for(int *i=pb1,*j=pb2;i<pb1,j<pb2;i++,j++)
        {
            if (*i!=*j)
            return false;
        }
    return true;
}


int main()
{
    int arr1[3]={10,20,30};
    int arr2[3]={10,20,30};
    if(compare(begin(arr1),end(arr1),begin(arr2),end(arr2)))
        cout << "arr equal!"<<endl;
    else
        cout << "arr no equal"<<endl;
    vector<int> vec1={10,20,30,40};
    vector<int> vec2={10,20,30};
    if(vec1 == vec2)
        cout<<"vec equal"<<endl;
    else cout<<"vec no equal"<<endl;
    return 0;
}