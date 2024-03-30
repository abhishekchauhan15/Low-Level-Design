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

// this class in not following the open/close principle
//because we are modifing the current class
// what we should do is extend this class and save to file should be there 

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

