#ifndef STRING_PRACTICE
#define STRING_PRACTICE

#include <string>
#include <iostream>
using namespace std;

void stringMethods()
{
    cout << "\n\nStart of the string method.\n";
    //define a strig 
    char simpleStr [20] = "simeple one!"; 
    char* pointerStr = new char[20]; 
    pointerStr = "pointer string!";

    cout << "char string: " << simpleStr << endl;
    cout << "pointer string: " << pointerStr << endl;

    //STL string instantiation and copy techiniques 
    string stlString (simpleStr);
    cout << "STL string copy the simple one is: " << stlString << endl;

    string stlString1(pointerStr,10); 
    cout << "STL string copy the pointer string for 10 chars: " << stlString1 << endl;

    string stlString2 (10, 'a');
    cout << "STL string has 10 a is: " << stlString2 << endl;

    /*
    access string and its content
    */
   string strSTLString("Sample string for access.\n");

   //access using array syntax 
   cout << "displaying characters using array-syntax.\n";
   for (size_t nCharCount = 0; nCharCount < strSTLString.length(); nCharCount ++){
    cout << "charactoer [ " << nCharCount << " ] is : " << strSTLString[nCharCount] << endl; 
   }

    //using itertor 
    cout << "displaying character using iterator.\n";
    for (string::const_iterator it = strSTLString.begin(); it != strSTLString.end(); it ++){
        cout << "charactor [ " << it - strSTLString.begin() << "] is: " << *it << endl; 
    }

    //access the content of a string as a c style string 
    cout << "the char* representation of the string is: " << strSTLString.c_str() << endl; 

    //just print like a string 
    cout << "Finally, the str print out is: " << strSTLString << endl;



    cout << "End of the string method. \n\n";


}

#endif