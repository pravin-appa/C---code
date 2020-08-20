#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
  srand(time(0));  //generates really random number by throwing number in there
           // it changes algorithm of computer

 for(int i=0; i<10 ; i++){
      cout << 1+(rand()%6) << endl;

 }

      return 0;
}

