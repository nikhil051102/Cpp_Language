#include <iostream>
using namespace std;

int main()
{
    // Pointer : Pointer is a DataType Which Holds The Address of datatypes

    int a=3;
    int* b = &a;
    // & = (Address Of) Operator
    cout<<"Value of a = "<<a<<endl;
    cout<<"The Address of a = "<<&a<<endl;   //Here, &a and b are same because they are holding the address of a.
    cout<<"The Address of a = "<<b<<endl;

    //* = (value at) Dereference Operator
    cout<<"The Value at Address b is "<<*b<<endl;  //Here * is used to know that what is value of which b is holding address.

    
    //Pointer To Pointer Concept.
    int** c = &b;
    cout<<"The address of b is "<<b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c  is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c))  is "<<*c<<endl;
    return 0;
}
