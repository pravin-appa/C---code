#include <iostream>
using namespace std;

void printArray(int Array[], int sizeofArray);


int main(){

   int Appa[3] = {1,2,3};

   printArray(Appa, 3);

}

void printArray(int Array[],int sizeofArray){

     for(int i=0; i<sizeofArray; i++){
          cout << Array[i] << endl;
     }
}
