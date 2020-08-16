#include <iostream>
#include <string>

using namespace std;

class Appa{
public:
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
    Appa yo;
    yo.set("I am very very nosy");
    cout << yo.get();
    return 0;
}
