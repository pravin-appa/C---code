#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    float  a;
    int p=1000;
    float r= .01;
    int day=1;
    for(int day=1 ;day<30; day++){
        a = p*pow(1+r ,day);
        cout << day << "-----" << a << endl;
    }

    return 0;
}
