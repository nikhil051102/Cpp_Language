#include <iostream>
#include <map>
#include <string>
using namespace std;
// Documentation : https://en.cppreference.com/w/cpp/container/map 

int main()
{
    map<string, int> m1;
    m1["x"] = 10;
    m1["a"] = 30;
    m1["y"] = 20;

    // m1.insert({{"c", 40}, {"d", 50}});     //This line is giving error in macOS but i ran this code online compilers it is running fine.
    map<string, int> :: iterator iter;
    for (iter = m1.begin(); iter!=m1.end(); iter++)
    {
        cout<<(*iter).first<<" : "<<(*iter).second<<endl;
    }
    
    return 0;
}