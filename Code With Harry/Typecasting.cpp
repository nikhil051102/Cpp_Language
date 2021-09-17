#include <iostream>
using namespace std;

int main()
{
    float a= 34.4;
    long double b = 34.4;

//Typecasting
    //If we write only 34.4 then by default compiler will assume it as "long double", 
    //to mention that value is float then write  "34.4f" and to mention it as longdouble then "34.4l" is used
    //This concept is mostly used in Function overloading.
    return 0;
}
