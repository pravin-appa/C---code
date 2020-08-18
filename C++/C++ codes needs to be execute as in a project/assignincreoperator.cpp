#include <iostream>

using namespace std;


int main()
{
    int x=20;

    x +=10;
    cout << x << endl;
    x -=10;
    cout << x << endl;
    x *=10;
    cout << x << endl;
    x /=10;
    cout << x << endl;

    //post increament
    int y=200;
    cout <<  x++ << endl;
    cout << x << endl;

    //pre increament
    int a =10;
    cout << ++x << endl;
    cout << x << endl;


    //post decreament
    int b =200;
    cout <<  x-- << endl;
    cout << x << endl;

    //pre decrement
    int c =10;
    cout << ++x << endl;
    cout << x << endl;



    return 0;
}
