#include <iostream>
using namespace std;

int variable = 50;    //Global Variable

void global()
{
    cout<<"The value of Global Variable is "<<variable<<endl;   //Global Variable will be Printed Here.
}

int main()
{
    int a = 4;
    float b = 3.14;
    int variable = 20;                 //Local variable is Declared here and Local Variable takes precedence over Global
    variable = 30;                     //This line will update value of Local Variable not Global because Local takes precedence.
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;

    global();
    cout<<"Value of Local Variable is "<<variable;
    return 0;
}