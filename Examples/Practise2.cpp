// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows, queries, c, d, i, j, x, y, m, n, ;
//     cin >> rows >> queries;
//     cout << rows << " " << queries;
//     cout << endl;

//     for (i = 0; i < rows; i++)
//     {
//         cin >> c;
//         int Row[c];
//         cout << c << " ";
//         for (i = 0; i < c; i++)
//         {
//             cin >> FirstRow[i];
//             cout << FirstRow[i] << " ";
//         }
//         cout << endl;
//     }

//     // int FirstRow[c];
//     // cout<<c<<" ";
//     // for ( i = 0; i < c; i++)
//     // {
//     //     cin>>FirstRow[i] ;
//     //      cout<<FirstRow[i]<<" ";
//     // }
//     // cout<<endl;
//     cin >> d;
//     int SecondRow[d];
//     cout << d << " ";
//     for (j = 0; j < d; j++)
//     {
//         cin >> SecondRow[j];
//     }
//     for (j = 0; j < d; j++)
//     {
//         cout << SecondRow[j] << " ";
//     }
//     cout << endl;
//     cin >> x;
//     cin >> y;
//     cout << x << " ";
//     cout << y;

//     cout << endl;

//     cin >> m;
//     cin >> n;
//     cout << m << " ";
//     cout << n;
//     return 0;
// }

//Program to check whether inputted number is even of odd using classes

/*
#include <iostream>
#include <string>
using namespace std;


class Number
{
private:
    int num;
public:
    void input();
    void check();  
};

void Number :: input()
{
    cout<<"Enter Any Number = ";
    cin>>num;
}

void Number :: check()
{
    if(num%2 == 0)
    {
        cout<<"Even Number";
    }
    else{
        cout<<"Odd Number";
    }
}

int main()
{
    Number N;
    N.input();

    N.check();
    return 0;
}
*/

// .Write a Program to search an element in an array using linear search.Make array as private member of class
/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Number
{
private:
    char array[100];

public:
    char find;
    void input()
    {
        cout << "Input : ";
        cin >> array;
    };
    void character()
    {
        cout << "Enter the Character to find : ";
        cin >> find;
    };
    void search()
    {
        for (int i = 0; i < 50; i++)
        {
            if (array[i]==find)
            {
                cout<<"Position of element : "<<i+1<<endl;
            }
            
        }
        
    }
};

int main()
{
    Number object;
    object.input();
    cout << endl;
    object.character();
    object.search();
    
    return 0;
}
*/

//Write a Program to find the area of rectangle using class.

#include <iostream>
#include <string>
using namespace std;

class Area
{
private:
    int l, b;
    int Area;
    int length;
    int breadth;

public:
    void getDim()
    {
        cout << "Length = ";
        cin >> length;
        cout << "Breadth = ";
        cin >> breadth;
    }
    void setDim()
    {
        l = length;
        b = breadth;
    }
    void getArea()
    {
        Area = l * b;
        cout << "Area of Rectangle = " << Area;
    }
};

int main()
{
    Area Rectangle;
    Rectangle.getDim();
    Rectangle.setDim();
    Rectangle.getArea();
    return 0;
}


#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Box
{
private:
    int l, b, h;
    int length, breadth, height;

public:
    Box(void)
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box& B)
    {
        l = B.l;
        b= B.b;
        h = B.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return ((long long)l*b*h);
    }
    bool x = (b1 < b2);
};

int main()
{
    return 0;
}
