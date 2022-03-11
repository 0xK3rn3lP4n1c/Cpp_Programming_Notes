#include <iostream>
using namespace std;

class Enemy
{
   public:
        virtual void attack(){} // since its virtual it goes and calls the attack funciton according to the object int this case either a ninja or a monster. 
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

int main()
{
    Ninja n;  
    Monster m;
    Enemy *enemy1 = &n; // We do this because everything an enemy can do a ninja can do
    Enemy *enemy2 = &m; // And anything an enemy can do a monster can do too
    
    enemy1->attack(); // we can do this like this because of the virtual attack function
    enemy2->attack(); // saves a lot of time and easier to do 
                    // here we call to attack function (basically the same function) but we get different outputs, this is how polymorphism works

    return 0;
}