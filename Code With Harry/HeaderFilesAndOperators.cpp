#include<iostream>
using namespace std;

// There Are 2 Types of Header Files:
// 1.System header files: It comes with the Compiler.
// #include<iostream>

// 2.User Defines Header Files: It is written by the programmer.
// #include"this.h"

int main()
{
    int a=15, b=5;
    // In this Code we are going to talk about Operator in c++
    // "<<endl" This Operator is used to jump in new line like we use \n
    cout<<"We are jumping to new line using endl operator;"<<endl;
    
    // 1.Arithmetic Operator : In this operator we can do operations line add, substract, multiply, divide, modulus(%), increment(++), decrement(--)


    // In the increment operator the side of (++) matter unlike c language for example if the the value of a is 4 if we apply operator a++ 
    // then 4 will be printed first and then value of a will increment by 1 i.e . 
    
    cout<<"The value of a++ is "<<a++ <<endl;
    cout<<"The value of a after increment is "<<a <<endl;

    // If we increment(++) sign of LHS of a then 5 will be printed bcz value of a will be increment by 1 first then it will be printed
    cout<<"The value of ++a is "<<++a <<endl;
    cout<<"The value of a is :"<<a<<" (will remain same bcz we have put ++ sign in LHS)"<<endl<<endl;

    // The above conditions are applied same in decrement(--) operator


    // 2.Assignment Operator: Used to assign values to variables. like "=="

    // 3.Comparison Operator
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;

    // 4.Logical Operator : These operators are &&(and), ||(or), !(not)

    return 0;
}
