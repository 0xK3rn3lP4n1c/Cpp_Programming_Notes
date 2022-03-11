#include <iostream>
using namespace std;

class Enemy
{
   public:
        virtual void attack(){
            cout << "nothing to override just the attack func. " << endl; // Here if there is a function and there is nothing to override this function gets called
        // in a pure virtual function you don't have this operation instead you have virtual void attac()=0;
        // And Abstract class is a class with a virtual function inside
        } // since its virtual it goes and calls the attack funciton according to the object int this case either a ninja or a monster. 
};

class Ninja: public Enemy{
    public:
        void attack()
        {
            cout << "ninja attack!" << endl;
        }

};

class Monster: public Enemy{
    public:
        void attack()
        {
            cout << "monster attack!" << endl;
        }

};

class Empty: public Enemy{ // Here as you can see this Empty function is inherited from the Enemy but doesn't have anything to override
    public:
};

int main()
{
    Ninja n;  
    Monster m;
    Empty e;
    Enemy *enemy1 = &n; // We do this because everything an enemy can do a ninja can do
    Enemy *enemy2 = &m; // And anything an enemy can do a monster can do too
    Enemy *enemy3 = &e;
    
    enemy1->attack(); // we can do this like this because of the virtual attack function
    enemy2->attack(); // saves a lot of time and easier to do 
    enemy3->attack(); // here we call to attack function (basically the same function) but we get different outputs, this is how polymorphism works

    return 0;
}