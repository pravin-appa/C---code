#include <iostream>
#include <string>

using namespace std;

class Appa{
   public:
    string name;
};

int main()
{
    Appa yo;
    yo.name="I am the perfect";
    cout << yo.name;
    return 0;
}
