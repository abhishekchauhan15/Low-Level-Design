#include <iostream>
using namespace std;

class Marker{
    private:
        string name;
        string color;
        int year;

    public:
        int price;
        Marker(string name, string color, int year, int price) : 
            color(color),
            year(year),
            price(price),
            name(name){
        }

};

class Invoice{
private:
    Marker mark;
    int quantity;

public:
    Invoice(int quantity, Marker mark) : 
        mark(mark),
        quantity(quantity){
        }

    int calcualteTotalPrice(){
        int price = mark.price * quantity;
        return price;
    }
};

class SaveInvoice{
    private:
        Invoice invo;

        public:
        void saveToDB(){
            //some code
        }
};


class InvoicePrinter{
    private:
        Invoice invo;

    public:
    void printInvoice(){
        //some code
    }
};



// now each class have single responsibility

