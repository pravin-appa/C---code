#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);


int main(){

   int sas = 20;
   int bas = 20;

   passByValue(sas);
   passByReference(&bas);

   cout << "sas is now " << sas << endl;
   cout << "bas is now " << bas << endl;


}

void passByValue(int x){
   x = 33;
}

void passByReference(int *x){
  *x = 55;
}
