#include <iostream>
#include <iomanip> //We have included this file for manipulators
using namespace std;

int main()
{
    // Constants in c++
    int const a = 45;
    cout<<"The value of Constant C = "<<a;
//    In the above example we have set value of c to be constant means we can't change it.
//    Otherwise it will give error.


   //Manipulators in C++ are used to enhance the look of your program.
    int x=10, y=203, z=5423;
    cout<<"The value of x without setw = "<<x<<endl;
    cout<<"The value of y without setw = "<<y<<endl;
    cout<<"The value of z without setw = "<<z<<endl;

    cout<<"The value of x with setw = "<<setw(4)<<x<<endl;
    cout<<"The value of y with setw = "<<setw(4)<<y<<endl;
    cout<<"The value of z with setw = "<<setw(4)<<z<<endl;

    // In the above example we have used the "setw" operator which we have enhance the code
    // the (4) is used to set width



    // Operator Precedence
    // While Performing Mathematical Operations or any operation in c++ we have to check 
    // which Operation is Preferred Above Which
    return 0; 
}
