#include <iostream>
using namespace std;

class Hero
{

private:
    string name;

public:
    int health;
    char level;
    static int timeToComplete;

    Hero()
    {
        cout << "constructor called" << endl;
    }

    ~Hero()
    {
        cout << "Destructor is called" << endl;
    }

    static int random(){
        return timeToComplete;
    }
};

//initilization of static member

int Hero::timeToComplete = 5;

int main()
{

    cout << Hero::timeToComplete << endl;
    Hero abhi;

    abhi.timeToComplete = 10;
    cout << abhi.timeToComplete << endl;

    cout << Hero::random();

    return 0;
}