#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample4.txt");
    out<<"My name is Nikhil Deore\n";
    out<<"My name is askdsnndas";
    out.close();

    ifstream in;
    string s;
    in.open("sample4.txt");
    // in>>s;
    // cout<<s;
    // in.close();

    string s2;
    while (in.eof()==0)
    {
        getline(in, s2);
        cout<<s2<<endl;
    }
    in.close();
    return 0;
}