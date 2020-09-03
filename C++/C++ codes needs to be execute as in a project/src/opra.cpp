#include <iostream>
#include "opra.h"
using namespace std;

opra::opra()
{

}

opra::opra(int a){
    num = a;
}

opra opra::operator+(opra op){
   opra io;
   io.num = num + op.num;
   return(io);

}
