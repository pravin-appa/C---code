#include <iostream>

using namespace std;

//assigning values in Arrays by loop

int main()
{

   int Appa[9];

      cout << "Index" << "   " << "Initilizer" << endl;

      for(int i=0; i<=9 ;i++){
          Appa[i] = 20;

        cout << i <<"----------" << Appa[i] << endl;
      }

      return 0;
}

