#include <iostream>
#include <string>
using namespace std;


class binary 
{
    string s;

    public:
    void read(void);
    void check_bin(void);
};

void binary :: read(void)
{     cout<<"Enter a Binary Number ";
      cin>>s;
}

void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrect Binary Format "<<endl;
            exit(0);
        }
        
    }
    
}

int main()
{
    //Nesting of Member Function = It means "calling a function from another function without usind dot(.)"

    //Below Function is programmed to check the input number is binary or not
    binary b;
    b.read();

    b.check_bin();
    
    return 0;
}
