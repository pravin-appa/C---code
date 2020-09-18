#include <iostream>
#include "stdint.h"
using namespace std;


int main()
{
  //Read integers A and B from input file and write their sum in output file.
  uint_least16_t a;
  uint_least16_t b;

  int sum;

  cin >> a ;
  cin >> b ;

  sum=a+b;
  cout << sum << endl;


  return 0;
}
