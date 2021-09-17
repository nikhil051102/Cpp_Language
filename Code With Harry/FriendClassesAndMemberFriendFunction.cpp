#include <iostream>
using namespace std;

//Forward Declaration
class Complex;
//Here we have done forward declaration matlab humne Complex naam ki class ko declare nhi kiya hai hum compiler ko sirf guarantee de rhe hai ki
//tumhe age jake Complex naam ka ek class milega

class Calculator
{
    public:
       int add(int a, int b)
       {
           return (a + b);
       }

       int sumRealComplex(Complex, Complex);
       int sumCompComplex(Complex, Complex);
       //Here Again we have done forward declaration 
};

class Complex
{
    int a, b;
    //Here below we are Indivisually declaring function as friends
    friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
    friend int Calculator :: sumCompComplex(Complex o1, Complex o2);
    //but if there are 100 function we can't declare then indivisually its not feasible


    //Method to declare 100 or more functions in one stroke 
    //we will declaare entire class as friend means agr "Calculator" naam ke class ka koi bhi function access mange to usko permission dedo
    friend  class Calculator;


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
};

int Calculator :: sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator :: sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}



int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    
    Calculator calc;
    int res1 = calc.sumRealComplex(o1, o2);
    cout<<"The Sum Real Part of o1 and 02 is "<<res1<<endl;
    int res2 = calc.sumCompComplex(o1, o2);
    cout<<"The Sum of Complex Part of o1 and o2 is "<<res2<<endl;
    return 0;
}
