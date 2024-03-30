#include <iostream>
using namespace std;

class Hero
{

    
private:
    string name;
   
public:
     int health;
     int level;

     // //constructor
    Hero(){
         cout << "constructor called"<<endl;
     }

     // //paramterized constructor
    Hero(int health)
     {
         cout << "this address: " << this << endl;
        
         this->health = health;
    }

    Hero(int level)
     {
         cout << "inside level " << endl;

         this->level = level;
    }


    Hero(int health, int level){
        this->level = level;
        this->health = health;
    }


    Hero(Hero &temp){
        this->level = temp.level;
        this->health = temp.health;
    }

    void print(){
        cout << "Health: " << health << endl;
        cout << "level: " << level << endl;
    }


    
};




int main()
{

    // Hero a;
    // a.print();          // prints garbage value of level and health 

    // Hero b(10);
    // b.print();

    Hero c(3);
    // c.print();     // getting error coz of same no. of argument is passed into two constructor

    return 0;
}