#include <iostream>
#include "newClass.cpp"
using namespace std;

// class - user deifned datatype
class Hero
{

    // it can be accessed inside a class only
private:
    string name;
    int health;

public:
    // properties or data members

    int level;

    // behaviour
    void attack()
    {
        cout << "name is :" << name;
    }

    // getter
    int getHealth()
    {
        return health;
    }

    // setter

    void setHealth(int h, string password)
    {
        if (password == "abcd")
            health = h;
    }
};

int main()
{

    // creation of object h1
    // object is an entity that consist of some properties and behaviour

    // static allocation
    Hero abhi;
    abhi.level = 52;
    // cout << sizeof(abhi);
    // cout << abhi.level;

    // access the private member through getter and setter

    // using the setter to set the health
    abhi.setHealth(100, "abcd");

    // using the setter to set the health
    cout << abhi.getHealth();

    //  ------------------------------------------------------------------------------------

    // dynamic allocation
    Hero *pari = new Hero;

    // dereferencing -> *pari

    (*pari).setHealth(200, "abcd");
    cout << (*pari).getHealth();

    // or

    pari->setHealth(220, "abcd");
    cout << pari->getHealth();

    Villan v1;

    return 0;
}