#include<iostream>
using namespace std;


class Marker {
    private:
        string name;
        string color;
        int year ;
        
    public:
        int price;
        Marker(string name, string color, int year , int price):
        color(color),
        year(year),
        price(price),
        name(name){
            
        }

        string getName(){
            return name;
        }

};

// this class in not following the single responsibility principle
class Invoice {
    private:
        Marker mark;
        int quantity;

    public:
        Invoice(int quantity, Marker mark):
        mark(mark),
        quantity(quantity){

        }

        int calcualteTotalPrice(){
            int price = mark.price * quantity;
            return price;
        }

        string billName(){
            return mark.getName();
        }


        void saveToDB(){
            //some code
        }

        void printInvoice()
        {
            // some code
        }
};
