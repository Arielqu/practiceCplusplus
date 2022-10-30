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

    cout << "\nEnd of the string method. \n\n";


}

#endif