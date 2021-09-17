#include <iostream>
using namespace std;

// This Is One Line Comment.

/*This is
Multi-Line 
Comment.*/
int global = 58;

void sum()
{
   cout<<global;
}

int main()
{
    int global = 25;
    int a = 15, b = 17;
    float pie = 3.14;
    char z = 'y';
    bool value = true;
    cout << "This is My First C++ Program\n";
    cout << "The Value of A is " << a << " and \nThe Value of B is " << b;
    cout << "\nThe Value of Pie is " << pie;
    cout << "\nThe Value Variable Z is " << z;
    cout << "\nThe Boolean Value is " << value;
    cout << global;
    sum();

    return 0;
}
