#include <iostream>
using namespace std;

int main()
{
    try{
      int x1;
      cout << "Enter first number" << endl;
      cin >> x1;

      int x2;
      cout << "Enter second number" << endl;
      cin >> x2;

      if(x2==0){
        throw 0;

      }

      cout << x1/x2 << endl;



    }catch(...){

       cout << "We cannot divide by 0" << endl;
    }
}
