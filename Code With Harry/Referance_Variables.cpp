#include <iostream>
using namespace std;

int x = 50;

int main()
{
    int x = 30;
    cout<<"The value of local x is "<<x<<endl;
    cout<<"The value of global x is "<<::x;     //Here scope resolution operator is used to print value of global variable.

    return 0;
}
