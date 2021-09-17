#include <iostream>
using namespace std;

int main()
{
    //Basic Control Structures.

    // 1.Sequence Structure = In this Structure Action 1... Action 2...And So on is in sequence means Action are performed in sequence.

    // 2.Solution Structure = In this structure Conditions are checked for example. If this is true then Action 1 & if this is false then Action 2.
                            // but in this structure Exit is same for action 1 & 2

    // 3.Loop Structure = In this structure Action are performed in loop for example. If this condition is true then go in this loop and perform action 1.
                        //   & if this is false then perform action 2  or take exit. Something Like This


    // If Else Statement : 
   /* int age;
    cout<<"Enter Your Age : ";
    cin>>age; 
    if (age<18)
    {
        cout<<"You Can't Access Our Services"<<endl;
    }
    else if (age==18)
    {
        cout<<"You Are The Younger Member To Access Our Services"<<endl;
    }
    else
    {
        cout<<"You Have Access To Our Services";
    }
     */


    // Switch Case Statement :
    /*int age;
    cout<<"Enter Your Age : ";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You Have Inputted Number 18"<<endl;
        break;
    case 22:
        cout<<"You Have Inputted Number 22"<<endl;
        break;
    case 2:
        cout<<"You Have Inputted Number 2"<<endl;
        break;
    
    default:
       cout<<"Your Inputted Number Doesn't Match With Our Data"<<endl;
        break;
    }
    */

    
    // For Loop :
    /*
     1.Example Of Finite For Loop
     int i;
     for ( i = 0; i < 40; i++)
     {
         cout<<i<<endl;
     } 
    */
    

    /* 
    2.Example Of Infinite For Loop
    int i;
    for (int i=1; 34<=40; i++)
    {
        cout<<i<<endl;
    }
    In the Above Program, The Condition 34<=40 is always true therefore this loop will go into Infinite Loop
    */

    
    //While Loop 
    /* 
    Example Of Finite While Loop   
    int i;
    while (i<=40)
     {
        cout<<i<<endl;
        i++;
     }
    */
     
    // Example Of Infinite While Loop;
    /* 
    int i=1;
    while (true)
    {
        cout<<i<<endl;
        i++;
    }
    */
    


    //Do While Loop
    /*
    int i=1;
    do
    {
      cout<<i<<endl;
      i++;
    } while (i<=40);
    */

    
    return 0;
}
