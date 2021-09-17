#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    //Factorial of a Number
    //Formula for Factorial = n * (n-1) !
    int a;
    cout<<"Enter The Number = ";
    cin>>a;
    cout<<"The Factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}
