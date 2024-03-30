#include <iostream>
using namespace std;

class Hero
{

private:
    string name;

public:
    int health;
    char level;

    Hero()
    {
        cout << "constructor called";
    }

    Hero(int health)
    {
        cout << "this address: " << this << endl;
        // this->health is the health from line 12 and another health is form the parameter
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Hero(Hero &temp)
    // {
    //     this->level = temp.level;
    //     this->health = temp.health;
    // }

    int getHealth()
    {
        return health;
    }

    void setHealth(int h, string password)
    {
        if (password == "abcd")
            health = h;
    }

    void setLevel(char l){
        level = l;
    }

    void print()
    {
        cout << "Health: " << health << endl;
        cout << "level: " << level << endl;
    }
};

int main()
{

    Hero abhi;
    abhi.setHealth(100, "abcd");
    abhi.setLevel('a');

    Hero pari(abhi);

    abhi.print();
    pari.print();   

    abhi.setHealth(80, "abcd");
    abhi.setLevel('v');

    abhi.print();
    pari.print();

    return 0;
}