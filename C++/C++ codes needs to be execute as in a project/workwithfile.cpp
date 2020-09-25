#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream Appafile;
   Appafile.open("pap.txt");

   Appafile << "I love myself so much \n";
   Appafile.close();
}
