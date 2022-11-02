#ifndef SET_AND_MULTISET
#define SET_AND_MULTISET
#include<set>
#include<iostream>
using namespace std; 
typedef set<int> SETINT;
typedef multiset<int> MSETINT;

template <typename Container>
void print(const Container &container){
    auto it = container.begin();
    while (it != container.end()){
        cout << *it << " ";
        it ++;
    }
    cout << endl;
}


void setMethods(){
    cout << "start to test multiset.\n";
    set<int> st; 
    multiset<int> mst; 

    /*
    insert elements
    */
   st.insert(1);
   st.insert(34);
   st.insert(2);
   st.insert(34);

   mst.insert(1);
   mst.insert(34);
   mst.insert(2);
   mst.insert(34);

   print(st);
   print(mst);

   /*
   find elements in set 
   */
  SETINT setInts; 
  setInts.insert(34);
  setInts.insert(312);
  setInts.insert(85); 
  setInts.insert(85);
  setInts.insert(2);

  print(setInts);
  SETINT::iterator it = setInts.find( -1 );

  //check if found 
  if (it != setInts.end())
    cout << "Find element: " << *it << endl;
  else 
    cout << "Cannot find element: " << *it << endl; 
 
 /*
 erase elements 
 */
  MSETINT msetInts; 
  msetInts.insert(34);
  msetInts.insert(312);
  msetInts.insert(85); 
  msetInts.insert(85);
  msetInts.insert(2);
cout << "the original multi sets before erase: " << endl; 
print (msetInts);
//can delete using a key 
auto res = msetInts.erase(2);
cout << "after erase with value 2: " << endl;
print (msetInts);
cout << "the returned value: " << res << endl; 

//delete using an iterator 
MSETINT::iterator imset = msetInts.begin();
msetInts.erase(++imset);
cout << "after erase with second position: " <<endl;
//cout << "remove the " << imset - msetInts.begin() << "th item";
print(msetInts); 


//delete with a bound
imset = msetInts.find(85);
msetInts.erase(imset, msetInts.end());
cout << "after delete all the values after 85: " <<endl;
print(msetInts);

/*
pros and cons of using STL set and multiset: 
applicaitons need frequent lookups: contents are sorted and quicker to locate; 
container needs to sort elements at insertion time: overhead in inserting elements 

The sorted binary tree structure results in another implicit disadvantage over sequential containsers such as vector 
in a vector; the element pointed by an itertor can be overwritten by a new value; 
by set, elements are sorted by the set class and therefore overwriting an element using an iterator should never be done
*/


}



#endif