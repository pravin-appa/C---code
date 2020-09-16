#include <iostream>
using namespace std;


int main() {

    try{
        int dadsAge=47;
        int sonsAge=50;


        if(sonsAge>dadsAge){
            throw 11;
        }
    }catch(int x){

              cout << "son age cannot be grater than dad " << x << endl;
        }

}
