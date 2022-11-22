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
    Mammal();
    Mammal(int age);
    virtual ~Mammal() { cout << "Mammal destructor.\n"; }

    // accessors
    int GetAge() const { return itsAge; }
    int GetWieght() const { return itsWeight; }
    int SetAge(int age) { itsAge = age; }
    int SetWeight(int weight) { itsWeight = weight; }

    // other methods
    virtual void Speak() const { cout << "Mammal sound. \n"; }
    void Sleep() const { cout << "shh. I am sleeping.\n"; }
    void Move() const {cout << "Mammal move one step. \n";}
    void Move(int distance) const {cout << "Mammal move " << distance << " steps.\n";}

protected:
    int itsAge;
    int itsWeight;
};

Mammal::Mammal()
    : itsAge(1),
      itsWeight(5)
{
    cout << "Mammal constructor.\n";
}

Mammal::Mammal(int age)
    : itsAge(age),
      itsWeight(5)
{
    cout << "Mammal int constructor.\n";
}

class Dog : public Mammal
{
public:
    Dog();
    Dog(int age);
    Dog(int age, int weight);
    Dog(int age, BREED breed);
    Dog(int age, int weight, BREED breed);
    virtual ~Dog() { cout << "Dog  destructor.\n"; } //also virtual destructor here 

    // Accessor
    BREED GetBreed() const { return itsBreed; }
    void SetBreed(BREED breed) { itsBreed = breed; }

    // Other methods
    void Speak() const {cout << "Woof.\n";}
    void WagTail() const { cout << "Tail wagging. \n"; }
    void BegForFood() const { cout << "Begging for food. \n"; }
    void Move(int distance) const {cout << "Dog move " << distance << endl;}

private:
    BREED itsBreed;
};

class Cat: public Mammal{
    public:
    void Speak() const {cout << "Meow.\n";}

};

class Horse: public Mammal{
public: 
void Speak() const {cout << "Winnie.\n";}
};

Dog::Dog() : Mammal(),
             itsBreed(GOLDEN)
{
    cout << "Dog constructor.\n";
}

Dog::Dog(int age) : Mammal(age),
                    itsBreed(GOLDEN)
{
    cout << "Dog int constructor.\n";
}

Dog::Dog(int age, int weight) : Mammal(age),
                                itsBreed(GOLDEN)
{
    itsWeight = weight;
    cout << "Dog (int,int) constructor.\n";
}

Dog::Dog(int age, BREED breed) : Mammal(age),
                                 itsBreed(breed)
{
    cout << "Dog (int, BREED) constructor.\n";
}

Dog::Dog(int age, int weight, BREED breed) : Mammal(age),
                                             itsBreed(breed)
{
    itsWeight = weight;
    cout << 'Dog (int,int, BREED) constructor.\n';
}
void testInheritance()
{
    // Dog Fido;
    // Dog rover(5);
    // Dog buster(6, 8);
    // Dog yorkie(3, GOLDEN);
    // Dog dobbie(4, 20, DOBERMAN);
    // Fido.Speak();
    // rover.WagTail();
    // cout << "Dobbie weight: " << dobbie.GetWieght() << endl;
    // Mammal bigAnimal;
    // Dog Fido;
    // bigAnimal.Speak();
    // Fido.Speak();
    
    //* hide overload functions
    // Fido.Move(); build error
    // call the base
    // Fido.Mammal::Move();
    // Fido.Move(3);
    // bigAnimal.Move();
    // bigAnimal.Move(2);

    //virtual methods: 
    /*
    Mammal* pMammal = new Dog;
    create a dog object on the heap and returns a pointer to that object, which is assigns to a ponter to mammal. 
    The essence of polymorphism: can create many types of windows, and give them each a virtual draw()
    by creating a pointer to a window, can call draw() without regard to the actual runtime type of the object pointed to. 
    the correct draw() fucntion will be called
    */

//    Mammal *pDog = new Dog;
//    Mammal *pCat = new Cat;
//    Mammal *pHorse = new Horse;
//    pDog->Speak();
//    pCat->Speak();
//    pHorse->Speak();
    Mammal* theArray[5];
    Mammal* ptr;
    int choice;
    for (int i=0; i<5; i++){
        cout << "1 dog, 2 cat, 3 horse: " ;
        cin >> choice;
        switch (choice){
            case 1: ptr = new Dog; break;
            case 2: ptr = new Cat; break;
            case 3: ptr = new Horse; break;
            default: ptr = new Mammal; break;
        }
        theArray[i] = ptr;
    }
    for (int i=0; i<5; i++){
        theArray[i]->Speak();
    }

}

#endif