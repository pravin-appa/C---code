#include <iostream>

using namespace std;

int appa=20;

int main()
{
    int appa=30;
    cout <<  ::appa << endl;


      return 0;
}

int volume(int l , int b, int h){
   return l*b*h;
}
