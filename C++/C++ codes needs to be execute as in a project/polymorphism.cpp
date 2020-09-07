#include <iostream>

using namespace std;

class enemy{
         protected:
            int attackpower;
         public:
              void setattackpower(int a){

                  attackpower=a;
           }

};

class ninja : public enemy{
 public:
    void attack(){
        cout << "i am a ninja, ninja chop! -" << attackpower << endl;
    }

};

class monster : public enemy{
 public:
    void attack(){
        cout << "i am a monster, monster slash! -" << attackpower << endl;
    }

};


int main()
{
    ninja n;
    monster m;

    enemy *enemy1 = &n;
    enemy *enemy2 = &m;

    enemy1->setattackpower(20);
     enemy2->setattackpower(50);
     n.attack();
     m.attack();


}
