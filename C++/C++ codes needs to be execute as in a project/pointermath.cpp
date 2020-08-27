#include <iostream>
using namespace std;



int main(){

    int Appa[10];

    int *m1 = &Appa[0];
    int *m2 = &Appa[1];
    int *m3 = &Appa[2];


    cout << "m1 is now at " << m1 << endl;
    cout << "m2 is now at " << m2 << endl;
    cout << "m3 is now at " << m3 << endl;

    //pointers points to the location in maths

    m1   +=2 ;
   cout << "m1 is now at " << m1 << endl;







}


