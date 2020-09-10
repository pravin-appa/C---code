#include <iostream>

using namespace std;

template <class appa>

appa add(appa x , appa y){

  return x+y;
}


int main()
{
   float x,y,z;

   z=add(21.22,36.34);
   cout << z << endl;

}
