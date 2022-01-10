#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    // Function Object (Function): Function wrapped in a class so that it is available like a class. 
    int arr[] = {54, 23, 34, 98, 1, 4};
    // sort(arr, arr+6);                   //This functionn will sort array in ascending order.
    sort(arr, arr+6, greater<int>());      //This greater funcion will sort array in descending order. This function is member of "functional library".
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}