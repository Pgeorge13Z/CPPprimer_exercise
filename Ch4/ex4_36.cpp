#include <iostream>

using namespace std;

int main(){
    int i=2;
double d=2.2;
// cout<< (d*=i);
cout<< (i*=static_cast<int>(d));

}
