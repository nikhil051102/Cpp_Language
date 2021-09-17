#include <iostream>
#include <string>
using namespace std;

class Complex
{
  private: 
      int a, b;
  public:
      //Creating a Constructor
      //Constructor is a special member function with th same name as of the class.
      //It is used to initialize the objects of its class.
      //It is automatically invoked whenever an object is created.

     Complex (void);//Constructor Declaration

     void printnumber()
     {
         cout<<"Your Number is "<<a<<" + "<<b<< "i"<<endl;
     }
};

Complex :: Complex(void) //This is default constructor as it takes no parameters
{
    a = 10;
    b = 20;
    cout<<"Hello World"<<endl;
}

int main()
{
    Complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}


/*
Characteristics of Constructors

1.It should be declared in public section of class.
2.They are automatically invoked whenever the object is created.
3.They cannot return values and they do not have return types.
4.It can have default arguments.
5.We cannot refer to their address.

*/


