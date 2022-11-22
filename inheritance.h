#ifndef INHERITANCE
#define INHERITANCE
#include <iostream>
using namespace std;

/*
1. the nature of what inheritance is
2. how to use inheritance to derive one class from another
3. what protected accessis and how to use it
4. the virtual function
5. private inheritance
*/

// 1. what is inheritance? is a relationship
enum BREED
{
    GOLDEN,
    CAIRN,
    DANGIE,
    SHELTLAND,
    DOBERMAN,
    LAB
};
class Mammal
{
public:
    // constructors
    Mammal() : itsAge(2), itsWeight(5) {cout << "Mammal constructor.\n";}
    ~Mammal() {cout << "Mammal destructor.\n";}

    // accessors
    int GetAge() const { return itsAge; }
    int GetWieght() const { return itsWeight; }
    int SetAge(int age) { itsAge = age; }
    int SetWeight(int weight) { itsWeight = weight; }

    // other methods
    void Speak() const { cout << "Mammal sound. \n"; }
    void Sleep() const { cout << "shh. I am sleeping.\n"; }

protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal
{
public:
    Dog() : itsBreed(GOLDEN) {cout << "Dog constructor.\n";}
    ~Dog() {cout << "Dog  destructor.\n";}

    // Accessor
    BREED GetBreed() const { return itsBreed; }
    void SetBreed(BREED breed) { itsBreed = breed; }

    // Other methods
    void WagTail() const { cout << "Tail wagging. \n"; }
    void BegForFood() const { cout << "Begging for food. \n"; }

private:
    BREED itsBreed;
};

void testInheritance()
{
    Dog Fido;
    Fido.Speak();
    Fido.WagTail();
    cout << "Fido is " << Fido.GetAge() << " years old. \n";
}

#endif