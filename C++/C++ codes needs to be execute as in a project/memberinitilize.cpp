#include <iostream>
#include "member.h"

using namespace std;


member::member(int a,int b)
:regvar(a),
covar(b)
{
    //ctor
}

void member::print(){
    cout << "The revar is " << regvar << "   "<< "The covar is " << covar << endl;
}
