#include <iostream>
#include "miss.h"
using namespace std;


miss::miss(int num)
:n(num)
{
}

void miss::print(){
 cout << "n is " << n << endl;
 cout << "this->n is " << this->n << endl;
 cout << "(*this).n is " << (*this).n << endl;

}

