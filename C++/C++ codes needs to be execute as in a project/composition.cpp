#include <iostream>
#include "birthday.h"
#include "person.h"


using namespace std;
int main()
{
   birthday birth(20, 03, 2001);

   person appa("Pravin ",birth);
   appa.printinfo();
}
