#include <iostream>
#include<map>
using namespace std;

/*
it++ : moves to next iterator so, we use this in Array, Queue etc.
it+1 : moves to next location so, we can use this in Array but not int maps, unordered sets
*/

int main()
{
    map<int, string> m;
    m[1] = "Mumbai";
    m[2] = "Delhi";
    m[3] = "Banglore";

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" : "<<it->second<<endl;
    }
    
    return 0;
}