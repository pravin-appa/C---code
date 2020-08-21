#include <iostream>    // Function Overloading

using namespace std;

void print(int x){
     cout << "I am printing integer " << x << endl;
}

void print(float x){
   cout << " I am printing float number " << x << endl;
}

int main()
{
    int a = 25;
    float b = 12.22;

     print(a);
     print(b);


      return 0;
}

