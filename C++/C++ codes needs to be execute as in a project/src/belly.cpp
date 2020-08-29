#include <iostream>
#include "belly.h"

using namespace std;



belly::belly()
{
    cout << "I am a regular object" << endl;
}

void belly::print() const{
     cout << "I am a constant object" << endl;
}
