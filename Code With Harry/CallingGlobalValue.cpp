#include <iostream>
using namespace std;

 int c = 20;

int main()
{
    int c= 15;
    cout<<"The value of Local c = "<<c<<endl;
    cout<<"The value of global c = "<<::c;

//    In the above line 9 we have called value of c like general but in line 10 we have called global
// value of c using "::c"
    return 0;
}
