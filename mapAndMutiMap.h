#ifndef MAP_MULTIMAP
#define MAP_MULTIMAP
#include<map>
#include<iostream>
using namespace std;
typedef map<int,string> MAP_INT_STRING;
typedef multimap<int,string> MMAP_INT_STRING;

template <typename T>
void P(T c);

void mapMethods(){
    cout << "\nStart map methods.\n";
    /*
    container signature: 
    map<keyType, valueType, Predicate=std::less<keyType>> mapObject;
    multimap<keyType, valueType, Predicate=std::less<keyType>> mmapObject
    */
   MAP_INT_STRING mapIntStr;
   /*
   insert elements 
   */
  mapIntStr.insert(MAP_INT_STRING::value_type(3,"Three"));
  mapIntStr.insert(pair<int,string> (6,"Six"));
  mapIntStr.insert(make_pair(-1, "Minus One"));
  mapIntStr[4] = "Four";
  // mapIntStr.insert({5, "Five"}); works later
  P(mapIntStr);

}

template <typename T>
void P(T c){
    for (auto it = c.begin(); it != c.end(); it ++){
        cout << it->first << ": " << it->second << endl;
    }
}
#endif