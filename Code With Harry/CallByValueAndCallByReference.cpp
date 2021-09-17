#include <iostream>
using namespace std;

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

//This will not swap a and b
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }


//Call by Reference Using Pointer
//This will swap the value of a and b
// void swapPointer(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

//Call by Reference using c++ reference variables
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}


int main()
{
    int a = 4, b= 5;
    // cout<<"The Sum of 4 and 5 is "<<sum(a,b);
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    // swap(a,b); //This Function wiLL not swap a and b

    // swapPointer(&a, &b); This will swap a and b using pointer reference

    // swapReferenceVar(a, b); This will swap a and b using reference variables
    
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    return 0;
}
