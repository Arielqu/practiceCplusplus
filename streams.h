#ifndef STREAMS
#define STREAMS
#include <iostream>
#include <fstream>
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
    // char s1[256], s2[256], s3[256];
    // cout << "Enter string 1: " ;
    // cin.getline(s1, 256);
    // cout << "S1: " << s1 << endl;

    // cout << "Enter string 2: ";
    // cin.get(s2,256);
    // cout << "S2: " <<s2 << endl;

    // cin.ignore(255, '\n');

    // cout << "Enter string 3: ";
    // cin.getline(s3,256);
    // cout << "S3: " << s3 <<endl;

    // //peek and putback 
    // char p;
    // cout << "Enter a phrase:\n";
    // while (cin.get(p) != 0){
    //     if (p =='?'){
    //         cin.putback('$');
    //     } else
    //         cout << p;
    //     while (cin.peek() == '#')
    //         cin.ignore(1,'#');
    // }

//     //using put
//     cout.put('h').put('e').put('l').put('l').put('o');

//     //using write
//     /*
//     write(test, size)
//     */
//    char testWrite[] = "\nFriend is very important.\n";
//    int fullLength = strlen(testWrite);
//    int tooShort = fullLength -4;
//    int tooLong = fullLength + 4;
//    cout.write(testWrite, fullLength);
//    cout.write(testWrite, tooLong);
//    cout.write(testWrite, tooShort);

    // //maninpulate. flag and formatting 
    // //cout.width() 
    // cout << "|";
    // cout << 123456<< "|\n";

    // cout << "|";
    // cout.width(5);//too small will not truncate
    // cout << 123456 << "|\n";

    // cout << "|";
    // cout.width(10);
    // cout.fill('*');
    // cout << oct << left << showbase<< showpoint<< showpos<<  123456 << "|\n\a";

    // //open a file, write and then read
    // char fileName[256];
    // char buffer[256];
    // cout << "Enter file name: \n";
    // cin >> fileName;
    // //open for writing 
    // ofstream ofOpen(fileName, ios::app);// append   
    // ofOpen << "Write to the file.\n";
    // cout << "Enter content to file:";
    // cin.ignore(1,'\n');
    // cin.getline(buffer, 256);
    // ofOpen << buffer << endl;
    // ofOpen.close();

    // //reopen for reading 
    // ifstream ifOpen(fileName);
    // cout << "Read from the file: \n";
    // char ch;
    // while (ifOpen.get(ch)){
    //     cout << ch;
    // }
    // cout << "\nDone Reading from file;\n";
    // ifOpen.close();

}

#endif