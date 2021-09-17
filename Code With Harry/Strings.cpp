#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //Different Ways of defining string
    /*1.General Way
    string str1;
    cin>>str1;
    cout<<str1; */

    //2.
    /* string str2(5, 'n');
   cout<<str2<<endl; */
    //Here '5' declares that string should be of 5 size without '\0'
    //and 'n' declares that n should be printed 5 times.
    //this type is something like predefined bcz we are defining everything

    //3.
    /*string str3 = "NikhilDeore";
   cout<<str3<<endl;  */
    //here simply we are declaring string n printing it.
    //Note that If we put space after nikhil then only Nikhil will be printed

    //4.If we want input with spaces.
    /*string str4;
   getline(cin, str4);
   cout<<str4<<endl; */
    //here  we are getting whole line as input by using function getline.

    //Different functons of string

    //1.Append : Means we are joining two string.
    /* string str1, str2;
   str1 = "Nikhil";
   str2 = "Deore";  */

    //a.
    /* str1.append(str2);
    cout<<str1<<endl; */
    //Here we have appended means we have merged str1 with str 2. therefore output of str1 will bechanged to str1 + str2.

    //b.
    // cout<<str1 + str2<<endl;
    //Here we are simply adding two string like mathematics

    //c.
    /*str1 =  str1 + str2;
   cout<<str1<<endl;  */
    //Here we have defined that str1 is merged form of str1 and str2

    // 2.If we want to take out particular character of a string
    /* string str1, str2;
    str1 = "Nikhil";
    cout<<str1[2]<<endl;  */

    // 3.Clearing the string using "clear" function means here we will swipe out the character in that string.
    /*string str = "Nikhil";
    str.clear();
    cout<<str<<endl;  */

    // 4.Comparing the elements of two string
    /*  string str1 = "Nikhil";
    string str2 = "Deore";
    cout<<str2.compare(str1)<<endl;  */
    /*In this string if the output is "Positive Number" then the second string is greater than first but  
    here positive number doesnt implies that number of character in string 2 are greater than string 1
    here there is binary comparison of string*/

    //If the output is negative number then string 2 is less than string 1 & if zero then both string are same

    //5. Checking whether the string is empty using string_name.empty
    /* string str = "Nikhil";
    cout<<str<<endl;

    str.clear();

    cout<<str.empty()<<endl;  */

    //If the output of str.empty is 1 then it is true means string is empty & if output is 0 then false

    // 6.Clearing a particular elements or group of elements using string_name.erase
    /* string str = "NikhilDeore";
    str.erase(1, 5);
    cout<<str<<endl; */
    //Here 1, denoted from which number we want to delete & 5 denoted how many number of elements we want to delete

    // 7. Finding the position of elements of the string.
    /* string str = "NikhilDeore";

    cout<<str.find("h")<<endl; */
    //Here the output is "3" which means the positive of element is 3

    //8. Inserting another string using string_insert
    /*  string str = "Nikhil";

    str.insert(3, "DEORE");
    cout<<str<<endl;  */
    //here 3 denoted position from which we want to insert & DEORE denoteed what u want to insert

    // 9.Determining the size of string using string_name.size
    /* string str = "Nikhil";
    cout<<str.size()<<endl;  */

    // 10.Iterate = means taking out particular elements of string
    /* string str = "Nikhil";

    for (int i = 0; i < str.length(); i++)
    {
        cout<< str[i] <<endl;
    }
    */

    // 10. Making sub string of another string
    /* string str = "NikhilDeore";
    cout<<str.substr(2, 4)<<endl;   */
    //Here 2 denotes position of elements & 4 denotes number of elements of new string

    // 11. String to Integer = If we want to add number to string(of Numbers only)
    /* string str = "1000";
    int x  = stoi(str);
    cout<< x + 24<<endl; */
    //Here stoi function converts that string to integer and then it adds "x" number in it

    // 12. Integer to String = This is something like appending of numbers
    /* string str = "1000";
    int x  = 1000;
    cout<< to_string(x) + "24"<<endl;  */

    // 13. Sorting string by their alphabetical order(Lexicographically)
    /* string str = "NikhilDeore";
    sort(str.begin(), str.end());
    cout<<str<<endl;  */
    //Here the capital letter are preferred over small letters.

    //14 Convert Inputted String to Completely Upper or Completely Lower

    /* string str = "nikhil vijay deore";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i]<='z')
         {
             str[i] -= 32;
         } 
    }
    cout<<str; */

    //15 Convert Inputted String to Completely Lower or Completely Upper
    /* string str = "NIKHIL VIJAY DEORE";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='A' && str[i] <= 'Z')
        {
            str[i] +=32;
        }  
    }
    cout<<str<<endl;  */

    // 16 There is Inbult Function in Strings That Completely Converts Upper or Lower
    /* string str = "Nikhil";
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout<<str<<endl;  */

    //Problems On Strings

    // 1.Form the Biggest Number from the numeric string
    //Agar Koi bhi number diya ho example "1024" usse hume Biggest Possible numbers  Print krna hai
    /* string str;
    cout<<"Enter Any Number : ";
    cin>>str;
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;  */

    // 2.Print The Maximum times repeated character and its frequency
    /* string str;
    cout << "Enter Any String = ";
    cin >> str;

    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout<<"Frequency = "<<maxF<<endl;
    cout<<"Character With Maximum Frequency is  "<<ans<<endl;   */

    //3. Program to Display string from backword
    /* string str;
    getline(cin, str);
    for (int i = str.size()-1; i >= 0; i--)
    {
        cout<<str[i];
    }  */

    // 4.Program to swap two strings.
    /* string str1, str2;
    cout<<"String 1 : ";
    cin>>str1;
    cout<<"String 2 : ";
    cin>>str2;
    string temp;
    temp = str1;
    str1 = str2;
    str2 = temp; 
    
    cout<<"Strings After Swapping "<<endl;
    cout<<"String 1 : "<<str1<<endl;
    cout<<"String 2 : "<<str2<<endl;
    */

    // 5.Program to check if given string is Palindrome or not.
    /* string str1, str2, str3;
    cout << "String 1 : ";
    cin >> str1;
    cout << "String 2 : ";
    cin >> str2;
    int j = 0;
    for (int i = str1.size()-1; i >= 0; i--)
    {
        str3[j] = str1[i];
        j++;
    }
    if (str2.compare(str3) == 0)
    {
        cout << "Inputted Strings are Palindrome";
    }
    else
    {
        cout << "Inputted Strings are not Palindrome";
    }
    */



    // 6. Remove all duplicates from input string.
    //    string str, duplicate;
    //    cout<<"String 1 : ";
    //    getline(cin, str);
    //    int k = 0;
    //    for (int i = 0; i < str.size(); i++)
    //    {
    //        for (int j = i+1; j < str.size(); j++)
    //        {
    //            if (str[i] == str[j])
    //            {
    //                cout<<str[i];
    //                break;
    //            }
    //        }
           
    //    }


       
       return 0;

}