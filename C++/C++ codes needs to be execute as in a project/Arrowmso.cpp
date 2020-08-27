#include <iostream>
#include "yuno.h"

using namespace std;



int main(){

    yuno appa;
    appa.print();

    yuno *pointer = &appa;

    pointer->print();




}


