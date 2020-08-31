#include "person.h"
#include <iostream>
#include "birthday.h"


using namespace std;

person::person(string x, birthday bo)
:name(x), date(bo)
{

}

void person::printinfo(){

cout << name << "was born on ";
 date.printdate();
}
