#include<iostream>
using namespace std;

int main()
{
    pair<int, string> p;
    //2 ways to initialize pair
    p = make_pair(1, "Mumbai");             //1st way
    // p = {2, "Delhi"};                       //2nd way
    cout<<p.first<<" : "<<p.second;


    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {100, 200, 300, 400, 500};

    pair<int, int> p_array[5];
    p_array[0] = {1, 100};
    p_array[1] = {2, 200};
    p_array[2] = {3, 300};
    p_array[3] = {4, 400};
    p_array[4] = {5, 500};

    for (int i = 0; i < 5; i++)
    {
        cout<<p_array[i].first<<" : "<<p_array[i].second<<endl;
    }
    
    return 0;
}