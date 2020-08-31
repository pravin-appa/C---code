#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "birthday.h"
using namespace std;


class person
{
    public:
        person(string x, birthday bo);
        void printinfo();

       private:
           string name;
           birthday date;
};

#endif // PERSON_H
