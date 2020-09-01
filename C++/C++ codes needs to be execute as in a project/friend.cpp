#include <iostream>
using namespace std;

class friendc{

     public :
         friendc(){var=0;}
     private :
          int var;

   friend void friendb(friendc &os);
};

void friendb(friendc &os){

  os.var=20;
  cout << os.var << endl;
}
int main()
{
    friendc sos;
  friendb(sos);
}
