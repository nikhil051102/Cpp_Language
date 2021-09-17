#include <iostream>

using namespace std;

class Employee //Here The First Character of Name of Class Muste be in Capital Letter.
{
    private:
    int a, b, c;
    public:
    int d, e;
    void setData(int a1,int b1,int c1); //Declaration
    void getData()
    {
        //we can access values of a, b, c from this because they are in same class but if try to access private values from another 
        //function then we can't
        cout<<"The Value of a is "<<a<<endl;
        cout<<"The Value of b is "<<b<<endl;
        cout<<"The Value of c is "<<c<<endl;
        cout<<"The Value of d is "<<d<<endl;
        cout<<"The Value of e is "<<e<<endl;
    }
};

void Employee :: setData(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Employee harry;
    harry.setData(1, 2, 4);
    // harry.a = 123; This will give error because a is private.
    //If we try to access the values of a and b from this function then we can't because that values are Private.
    harry.d = 34;
    harry.e = 89;
    harry.getData();
    return 0;
}
