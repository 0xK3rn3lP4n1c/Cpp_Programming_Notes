#include <iostream>
using namespace std;

class Enemy
{
    protected:
        int attackPower;
    public:
        void setAttackPower(int a){
            attackPower = a;
        }
};

class Ninja: public Enemy{
    public:
        void attack()
        {cout << "I am a ninja, whcha -- health: -" << attackPower << endl;}

};

class Monster: public Enemy{
    public:
        void attack()
        {cout << "I am a monter, chomp -- health: -" << attackPower << endl;}

};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n; // Because ninja is a type of enemy this is valid
    Enemy *enemy2 = &m; // Anything an enemy can do the monster can do as well

    enemy1->setAttackPower(25); // ninja is just a more spesific type of enemy
    enemy2->setAttackPower(50); // ever enemy has setAttackPower

    n.attack(); // Can't use Enemy1 because it's a type of enemy
    m.attack(); // Enemy class does not have attack 
                // Virtual members make this even easier

    return 0;
}