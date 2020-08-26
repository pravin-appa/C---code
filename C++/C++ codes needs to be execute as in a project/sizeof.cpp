#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);


int main(){

    int Appa1 = 12;
    cout << sizeof(Appa1) << endl;

    char Appa2 = 'A' ;
    cout << sizeof(Appa1) << endl;

    double Appa3 = 12.22;
    cout << sizeof(Appa1) << endl;


    double  Suup[10];
    cout << sizeof(Suup) << endl;
    cout << sizeof(Suup
                   ) / sizeof(Suup[0]) << endl;

}


