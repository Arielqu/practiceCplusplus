#ifndef STREAMS
#define STREAMS
#include <iostream>
using namespace std;

void testStreams(){
    /*
    streambuf: class manages the buffer, fill, empty, flush the buffer
    ios class is the base class to the input and output stream classes
    ios has a streambuf object as a member variable
    istream and ostream derive from the ios class; 
    iostream derives from both istream and ostream. It provides input and output methods for writing to the screen.
    fstream class provide input and output from files.
    */

//    //input strings 
//    char yourname[50];
//    cout << "Enter your name: ";
//    cin >> yourname;
//    cout << "\nYour name is: ";
//    cout << yourname; //input is huajin qu; output is only huajin 

//    //single char input
//    char ch;
//    while ( (ch = cin.get()) != EOF){
//     cout << "ch: " << ch << endl;
//    }
//    cout << "\nDone.\n";
    // // get() with a character reference parameter 
    // char a,b,c;
    // cout << "Enter three letters: " ;
    // cin.get(a).get(b).get(c);
    // std:: cout << a << b<< c<< endl;


    //get strings from standard input
    // get (pCharArray, StreamSize, TermChar)
    char s1[256], s2[256], s3[256];
    cout << "Enter string 1: " ;
    cin.getline(s1, 256);
    cout << "S1: " << s1 << endl;

    cout << "Enter string 2: ";
    cin.get(s2,256);
    cout << "S2: " <<s2 << endl;

    cin.ignore(255, '\n');

    cout << "Enter string 3: ";
    cin.getline(s3,256);
    cout << "S3: " << s3 <<endl;

}

#endif