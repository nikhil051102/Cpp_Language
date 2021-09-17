#include <iostream>
using namespace std;

class Matrix
{
public:
    int rows;
    int columns;
    int matrix[3][3];
    void getdata()
    {
        cout<<"Input the elements of 3x3 Matrix"<<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> matrix[i][j];
            }
            cout << endl;
        }
    }
    void putdata()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[i][j];
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix m1;
    m1.getdata();
    Matrix m2 = m1;
    m2.putdata();
    Matrix m3;
    m3.output();
    return 0;
}