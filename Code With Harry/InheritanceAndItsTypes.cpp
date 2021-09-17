#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}


//Important Points 
//1.The capability of a class to derive properties and characteristics from another class is called Inheritance
//2.Inheritance very important part of OOPs.
//3.We can reuse the properties of an existing class by Inheriting from it.
//4.The existing class is called "Base Class" and the Derived class is called "Derived Class".


//Types of Inheritance.
// 1. Single Inheritance - A derived class with only one Base class. 
// 2. Multiple Inheritance - A derived class with more than one base class. 
// 3. Hierarchical Inheritance - Many Derived classes from a single class.
// 4. Multilevel Inheritance - Deriving class from already derived class. 
// 5. Hybrid(Virtual) Inheritance - It is combination of multiple inheritance and multilevel inheritance. 