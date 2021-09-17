#include <iostream>
using namespace std;

int main()
{
    int n;
    int a;
    int count = 0;
    cout << "Number of elements in an array = ";
    cin >> n;
    int array[n];
    cout << "Input Arrays = ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int j = 0; j < n; j++)
    {
        array[j] = a;
        for (int k = 0; k < n; k++)
        {
            if (a > (k*1 - 1))
            {
                count = count + 1;
            }
        }
        cout << endl<< count;
    }

    return 0;
}
