#include <iostream>

using namespace std;

template <class F>

class appa{
    F first , second;
public:
    appa(F a, F b){
        first=a;
        second=b;
    }
     F bigger();
};

template <class F>

F appa<F>::bigger(){
    return(first>second?first:second);

}

int main()
{
   appa <int>ap(25,369);
   cout << ap.bigger() << endl;
}
