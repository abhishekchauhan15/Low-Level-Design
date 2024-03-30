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


class Invoice{
private:
    Marker mark;
    int quantity;

public:
    //constructor
    Invoice(int quantity, Marker mark) : 
        mark(mark),
        quantity(quantity){
        }

    int calcualteTotalPrice(){
        int price = mark.price * quantity;
        return price;
    }
};

//correct code

class InvoiceDao {
    private:
    Invoice invoice;

    public:
    InvoiceDao(Invoice invoice):
    invoice(invoice){
    }

    void saveToDB(){
        //some code
    }

    void saveToFile(){
        //some code
    }



};



//correct code 
