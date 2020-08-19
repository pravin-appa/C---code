#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    //AND operator
    int age=20;
    int money=1000;

    if(age>20 && money>500){
        cout << "You are allowed in club"  << endl;
    }
    else{
        cout << "You are underage" << endl;
    }

    int age1=21;
    int claso=4;

    if(age1>20 || claso>4){
        cout << "You are allowed in club"  << endl;
    }
    else{
        cout << "You are done go out!!!!" << endl;
    }


  return 0;
}
