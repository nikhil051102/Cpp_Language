#include <iostream>
#include <list>
using namespace std;

void Display(list<int> l)
{
    list<int> :: iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        cout<<(*iter)<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(40);
    l.push_back(50);

    Display(l);
    l.pop_back();
    Display(l);
    l.pop_front();
    Display(l);
    l.remove(40);      //If 40 is present multiple times in list then they all will be removed.
    Display(l);

    list<int> l2(3);
    list<int> :: iterator iter2 = l2.begin();
    *iter2 = 100;
    iter2++;
    *iter2 = 200;
    iter2++;
    *iter2 = 300;
    Display(l2);

    //Merging two lists.
    l.merge(l2);
    Display(l);
    return 0;
}