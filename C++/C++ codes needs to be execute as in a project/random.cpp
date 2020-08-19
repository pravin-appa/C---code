#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    //random number generator

    cout << rand() << endl;

    //random number generator between 1&6
   for(int i=0; i<10; i++){
          cout << 1+(rand()%6) << endl;

   }


  return 0;
}
