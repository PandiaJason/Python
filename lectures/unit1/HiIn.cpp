
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing..." << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;
    myDog.eat(); // Inherited from Animal
    myDog.bark(); // Specific to Dog
    myCat.eat(); // Inherited from Animal
    myCat.meow(); // Specific to Cat
    return 0;
}
