#include <iostream>

using namespace std;

template <class First , class Second>

First add(First x , Second y){

  return x+y;
}


int main()
{
   float a = 20.01;
   int b = 22;

   cout << add(a,b) << endl;

}
