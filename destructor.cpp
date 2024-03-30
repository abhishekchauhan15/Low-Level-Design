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
        cout << "constructor called" << endl;
    }

    ~Hero()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{

    Hero abhi;

    Hero *pari = new Hero();
    
    // manually calling the destructor
    delete pari;

    return 0;
}