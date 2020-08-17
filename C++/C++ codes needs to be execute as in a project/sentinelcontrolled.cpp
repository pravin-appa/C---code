#include <iostream>

using namespace std;


int main()
{
    int age;
    int number=0;
    int ageTotal=0;

    cout<< "The age of person or type -1" << endl;
    cin >> age;

    while(age!=-1){
        ageTotal=age+ageTotal;
        number++;
        cout<< "The age of next person or type -1" << endl;
        cin >> age;

    }

     cout << "Your total number of person is" << number << endl;
     cout << "Your total average of age is" << ageTotal/number << endl;

    return 0;
}
