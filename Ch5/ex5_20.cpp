// //逻辑错误: ctrl+z会输入 导致多进行一次循环，导致错误结果,在G++中，用runcode反而不会出错
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string s,temp;
//     int tag=0;
//     cin>>s;
//     while(!s.empty())
//     {
//         if(s!=temp)
//         {
//             temp=s;
//             cin>>s;
//         }

//         else
//         {
//             tag=1;
//             break;
//         }
//     }
//     cout<<tag;
//     (tag==1)? (cout<<"string that appear consecutively is "<<s<<endl):(cout<<"No word is repeated continuously"<<endl) ;
// }

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string read, tmp;
    while (cin >> read)
        if (read == tmp)
            break;
        else
            tmp = read;

    if (cin.eof())
        cout << "no word was repeated." << endl; // eof(end of file)判断输入是否结束,或者文件结束符,等同于 CTRL+Z
    else
        cout << read << " occurs twice in succession." << endl;

    return 0;
}