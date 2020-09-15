#include <iostream>
using namespace std;

template <class T>
class spar{
   public:
       spar(T x){
         cout << x << " is not a character" << endl;
       }

};
template<>
class spar<char>{
   public:
       spar(char x){
           cout << x << " is indeed a character!!" << endl;
       }

};

int main() {
  spar<int> ob1(20);
  spar<double> ob2(20.33);
  spar<char> ob3('p');
}
