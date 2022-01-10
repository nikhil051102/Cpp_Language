#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files
1. fstreambase
2. ifstream
3. ofstream


Inorder to work with files, primarily, we have to open it, there 2 ways to open file in c++
1. Using Constructor
2. Using the member function open() of the class.
*/

/*
--> Important Points <--
1) If any text is already present in file, if we write in it then it will overwrite all the content.
2) If we try to open a file which doesnt exist then it will create a file of that name.
*/

int main()
{
    // 1. Opening File using Constructor.
    string st = "Nikhil Deore";
    string st2;
    //1. Writing.
    // ofstream out("sample1.txt");
    // out<<st;
    // out.close();

    //2. Reading.
    // ifstream in("sample2.txt");
    // // in>>st2;                 //This will read only first word of the line
    // // cout<<st2;
    // getline(in, st2);           //This will real whole line.
    // cout<<st2;
    // in.close();
    return 0;
}