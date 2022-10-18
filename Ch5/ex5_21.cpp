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
    {
        if (read == tmp)
            if(isupper(read[0]))
                break;
        tmp=read;
    }


    if (cin.eof())
        cout << "no word was repeated." << endl; // eof(end of file)判断输入是否结束,或者文件结束符,等同于 CTRL+Z
    else
        cout << read << " occurs twice in succession." << endl;

    return 0;
}