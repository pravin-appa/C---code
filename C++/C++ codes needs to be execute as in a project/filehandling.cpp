#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream Appafile("Aap.txt");

   if(Appafile.is_open()){
       cout << "File is open now" << endl;

   }else{
      cout << "You are making mistake" << endl;
   }

   Appafile << "I love myself so much \n";
   Appafile.close();
}
