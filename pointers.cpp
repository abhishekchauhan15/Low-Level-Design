#include <iostream>
using namespace std;

void passByValue(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}

// copies the reference of an argument into formal paramtere
// refers to the same location as a and b ,same as alias
// in simple words a and b are named as s and y
void passByReference(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

// copies the address of the argument into formal paremeter
// *x is a pointer
// passing the address of a in *x or it is pointing towards the address of a
void passByPointer(int *x, int *y)
{
    // we are assignig the value which is pointed by x
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{

    int a = 10, b = 20;

    // passByValue(a, b);
    // cout << a << " " << b << endl;

    // passByReference(a, b);
    // cout << a << " " << b << endl;

    passByPointer(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}