#include <iostream>
using namespace std;

int main()
{
    //In normal variable let's say int  a = 5; in this example we can access the address of a by using &a or pointer

    //But What if we want access the address of any elements in array, then we will Pointer With Array. Let's See

    // int marks[3] = {10, 12, 15};
    // int* b = marks;                   //If we "&" to access the address of array then it will show error.
    // cout<<"The value of b is "<<b;   //but in arrays let's say int marks[3]; In This Example, Using pointer if we try to access the address of array then it will show
                                     // the address of first element of array.


    // Pointers With Arrays.

    //1.Pointer Arithmatic.
    //Formula : address(new) = address(current) + i*sizeof(Datatype)

    int marks[4] = {25, 28, 29, 30};
    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}
