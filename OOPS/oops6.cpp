#include <iostream>
using namespace std;

class Animal {
private:
    string animal_type;
public:
    int legs;

    Animal(){ // non paramiterized constructor 
        cout<<"animal constructor"<<endl;
    }
    
    Animal(int legs){ // parameterized constructor 
        this->legs = legs;
    }

    void eat() {
        cout << "Animal is eating" << endl;
    }

    ~Animal(){
        cout<<"animal destructor"<<endl;
    } 
};

class Dog : public Animal { // inheritance is happening in public mode. 
public:
    string name; 
    
    Dog(){// non paramiterized constructor 
        cout<<"dog constructor "<<endl;
    }

    Dog(string name,int legs) : Animal(legs){ // parameterized constructorm, here Animal parameterized constructor is getting called 
        this->name = name;
    }

    void bark() {
        cout << "Dog is barking" << endl;
    }

    ~Dog(){
        cout<<"dog destructor "<<endl;
    }
};

int main() {
    Dog d1;
    d1.legs = 4; // legs is the property of animal which is inherited by Dog class
    d1.name = "max"; // name is the property of Dog

    //d.animal_type = "dog"; propertes or functions written in private mode cannot be inherited. 
    
    d1.eat();   // Inherited function
    d1.bark();  // Dog's own function
    cout<<"dog 1 legs :"<<d1.legs<<endl;
    cout<<"dog 1 name : "<<d1.name<<endl;

    Dog d2("bowbow",4);
    cout<<"dog 2 legs :"<<d2.legs<<endl;
    cout<<"dog 2 name : "<<d2.name<<endl;
    return 0;
}

/*
output :

animal constructor
dog constructor 
Animal is eating
Dog is barking
dog 1 legs :4
dog 1 name : max
dog 2 legs :4
dog 2 name : bowbow
dog destructor 
animal destructor
dog destructor 
animal destructor
*/