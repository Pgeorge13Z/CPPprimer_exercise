#include <iostream>

using namespace std;

int main()
{
    char input;
    unsigned a = 0, e = 0, i = 0, o = 0, u = 0;
    while (cin >> input)
    {
        switch (input)
        {
        case 'a' :
        case 'A' :
            a++;
            break;
        case 'e' :
        case 'E' :
            e++;
            break;
        case 'i' :
        case 'I' :
            i++;
            break;
        case 'o' && 'O':
            o++;
        break;
        
        }
        cout<<"a: "<<a<<" "<<"e: "<<e<<" "<<"i: "<<i<<"o: "<<o<<endl;
    }
}