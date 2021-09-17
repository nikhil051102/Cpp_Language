#include <iostream>
#include <string>
using namespace std;

//Parameterized Constructor
//Default Constructor is discussed in Constructor.cpp

class Complex
{
    int a, b;

 public:
     Complex(int, int);

     void printNumber()
     {
         cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
     }  
};


Complex :: Complex(int x, int y) //This is a Parameterized constructor as it takes 2 parameters
{
    a=x;
    b=y;
}


int main()
{
    //Implicit call
    Complex a(4, 6);

    //Explicit call
    Complex b = Complex(5, 7);

    a.printNumber();
    b.printNumber();
    return 0;
}
