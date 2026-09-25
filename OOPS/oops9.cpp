/*
a pure virtual class tells the child classes that it must provide its own implementation. Animal becomes an abstract class.
We cannot create an object directly from Animal class.
*/
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();

    return 0;
}

/*
output :
Dog barks
*/