#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // string s = "Nikhil Deore";
    // ofstream x("sample3.txt");
    // x<<"My Name is "+ s;
    // x.close();

    ifstream y("sample3.txt");
    string s1;
    getline(y, s1);
    cout<<s1;
    y.close();
    return 0;
}