#include <iostream>
using namespace std;

class Hero
{

private:
    string name;

public:
    int health;
    int level;
    int abc;

    // //constructor
    Hero()
    {
        cout << "constructor called";
    }

     //paramterized constructor
    Hero(int health)
    {
        cout << "this address: " << this << endl;
        // this->health is the health from line 12 and another health is form the parameter
        this->health = health;
    }

    Hero(int health, int level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor
    //  it is made my passing the reference not by passing the value
    Hero(Hero &temp)
    {
        this->level = temp.level;
        this->health = temp.health;
    }

    void print()
    {
        cout << "Health: " << health << endl;
        cout << "level: " << level << endl;
    }
};

int main()
{
    // static
    Hero abhi(10);
    // cout << "add of abhi: " << &abhi<<endl;
    Hero amit(100, 73);
    Hero suresh(130, 743);

    // copying the constructor
    Hero aryan(amit);

    Hero r(suresh);
    r.print();

    // aryan.print();

    // dynamic
    Hero *pari = new Hero(20);
    // cout << "add of pari: " << &pari << endl;

    return 0;
}