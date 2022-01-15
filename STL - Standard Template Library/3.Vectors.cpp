#include <iostream>
#include <vector>
using namespace std;
// Documentation : https://www.cplusplus.com/reference/vector/vector/ 

template <class T>
void Display(vector<T> &v)     //Here, we have used & reference not simply v because simply v will create copy but &v will take reference only.
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1;                   //Zero length integer vector.
    vector<char> vec2(10);               //10-element character vector.
    vector<char> vec3(vec2);            //vec3 is derived from vec2.
    vector<float> vec4(4, 3.4);         //3.4 will be printed 4 times.
    int n;

    cout<<"Size of Vector : ";
    cin>>n;

    int element;
    for (int i = 0; i < n; i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>element;
        vec1.push_back(element);         //To insert element at the end of vector.
    }
    // vec1.pop_back();                    //This function will remove last element of vector.
    Display(vec1);


    //Insertion of Element in Vector
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1, 200);             //Inserting 200 at the 2nd Position.
    Display(vec1);

    //Inserting multiple copies of element in Vector
    vec1.insert(iter+3, 5, 100);          //Inserting 5 copies of 100 at the 4th Position
    Display(vec1);
    return 0;
}