#include <iostream>
#include "stdint.h"

using namespace std;


int main()
{

    long long n,number=0;
    long long  dividend=0;

    cin >>n;
          for(  long long count = 1;count <= n;count++)
            {
                  number = number + count;

          if(number % 3 == 0)
           {
            dividend++;
            }
                 }
                cout << dividend << endl;


    return 0;
}

