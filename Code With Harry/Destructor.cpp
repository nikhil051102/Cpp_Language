#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
// int count = 0;

class num
{
public:
    int count = 0;
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    ~num() //Here Destructor is called which is denoted by ~name
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}

//IMP Points Regarding Destructor.
// 1). Compiler Destructs memory allocated to destructor (during run time) after the work of destructor is done.
