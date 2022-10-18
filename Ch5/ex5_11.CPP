#include <iostream>

using namespace std;

int main()
{
    char input;
    unsigned a = 0, e = 0, i = 0, o = 0, u = 0,spaceCnt = 0, tabCnt = 0, newLineCnt = 0;
    while (cin >> std::noskipws >> input)
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
        case ' ':
            spaceCnt++;
            break;
        case '\t':
            tabCnt++;
            break;
        case '\n':
            newLineCnt++;
        }
       	cout << "Number of vowel a(A): \t" << a << '\n'
		<< "Number of vowel e(E): \t" << e << '\n'
		<< "Number of vowel i(I): \t" << i << '\n'
		<< "Number of vowel o(O): \t" << o << '\n'
		<< "Number of vowel u(U): \t" << u << '\n'
		<< "Number of space: \t" << spaceCnt << '\n'
		<< "Number of tab char: \t" << tabCnt << '\n'
		<< "Number of new line: \t" << newLineCnt << endl;
    }
}