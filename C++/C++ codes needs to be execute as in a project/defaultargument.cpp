#include <iostream>

using namespace std;

int volume(int l=1, int b=1, int h=1);

int main()
{

    cout << volume(5);


      return 0;
}

int volume(int l , int b, int h){
   return l*b*h;
}
