#include <iostream>
using namespace std;

//Here there are two function their names are same but their input is different means if we pass two integer
//then 1st sum function will be called and if we pass three integer then it will 2nd sum function is called
//Means C++ Language is intelligent enough to differ between two function having two different argument as input
int sum(int a, int b)
{
    cout<<"Sum of a and b = ";
    return a + b;
}

int sum(int a, int b, int c)
{
    cout<<"Sum of a, b and c = ";
     return a+b+c;
}


int main()
{
    int a, b, c;
    cout<<"Value of a : ";
    cin>>a;
    cout<<"Value of b : ";
    cin>>b;
    cout<<"Value of c : ";
    cin>>c;
    cout<<"Using Two Arguments...... "<<sum(a, b)<<endl;
    cout<<"Using Three Arguments..... "<<sum(a, b, c);
    return 0;
}
