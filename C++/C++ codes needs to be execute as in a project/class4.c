#include <iostream>
#include <string>

using namespace std;

class Appa{
public:
     Appa(string z){
       set(z) ;
     }
    void set(string x){
        name = x;
    }

    string get(){
        return name;
    }

   private:
    string name;
};

int main()
{
    Appa oat("I am Appa and I love my mama very much");
    cout << oat.get();
    return 0;
}
