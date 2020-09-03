#include <iostream>
#include "opra.h"
using namespace std;


int main()
{
   opra a(20);
   opra b(12);
   opra c;

   c = a+b;
   cout << c.num << endl;
}
