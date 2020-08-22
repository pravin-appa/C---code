#include <iostream>

using namespace std;

//assigning values in Arrays by loop

int main()
{

   int Appa[5] = {1,5,20,51,32};
   int sum = 0;

      for(int i=0; i<=9 ;i++){
          sum += Appa[i];

        cout << sum << endl;
      }

      return 0;
}

