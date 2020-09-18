#include <iostream>
#include "stdint.h"

using namespace std;


int main()
{

  long long n,number;
  long long dividend;

  while(cin >> n){
        dividend=0;
          number = 0;
          for(long long count = 1;count <= n;count+=1)
            {
                  number = number + count;
          if(number % 3 == 0)
           {
            dividend++;
            }
                 }
                cout << dividend << endl;
     }

    return 0;
}

