#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    const vector<string> grade = { "E", "D", "C", "B", "A", "A++"};
    int score;
    cin >> score;
    string level;
    if (score < 60)
        level = grade[0];
    else
    {
        level = grade[(score - 60) / 10 + 1];
        if(score != 100)
        {
        ((score - 60) % 10 > 7)? (level+="+"):(((score - 60) % 10 > 3)?(level=level):level+="-") ;

        }

    }
    cout << level << endl;
    return 0;
}