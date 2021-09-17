#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }

    friend Complex sumComplex(Complex o1, Complex o2);
    //Here we have declared that Complex sumComplex is the Friend Function of Class "Complex". So sumComplex can access the data of Complex;
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{

    //If we try to declare the c1.sumComplex here. then compiler will through error becausesumComplex have access to data od Class Complex
    //it can access the function in Class "Complex".
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

//Properties of Friend Function
/* 1.Not in the scope of class means it is not part of class it only have access to data of Class
2.Since it is not in the scope of class so it can't be called from the object of that class.
3.Can be invoked without the help of any object
4.Usually Contains the arguments as Objects.
5.Can be declared inside public or private section of the class means if we declare friend function in public or private there is no difference in it
6.It cannot access the members directly by their names
*/
