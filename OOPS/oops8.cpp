#include<bits/stdc++.h>
using namespace std;

class person{
public: 
    string name ;
    // constructor overloading 
    person(){
        cout<<"non parameterized"<<endl;
    }
    person(string name){
        cout<<"parameterized"<<endl;
    }
};

class print{
public:
    // function overloading
    void getinfo(int x){
        cout<<"integer"<<endl;
    }
    void getinfo(char c){
        cout<<"character"<<endl;
    }
};

class parent{
public:
    void show(){
        cout<<"parent class"<<endl;
    }
};

class child : public parent{
public:
    void show(){
        cout<<"child class "<<endl;
    }
};

class student1{
public:
    virtual void give(){
        cout<<"student1 class"<<endl;
    }
};

class student2 : public student1{
public:
    void give(){
        cout<<"student2 class "<<endl;
    }
};


int main(){
    // constructor overloading example
    person p1;
    person p2("tony");
    
    // function overloading example 
    print P1;
    P1.getinfo(100);
    print P2;
    P2.getinfo('%');
    
    // function overriding example  
    parent pp;
    pp.show();//  parent class function overrides child class function 
    child ch;
    ch.show(); // child class function overrides parent class function 

    // virtual function example
    student1 s1;
    s1.give();
    student2 s2;
    s2.give();
}

/*
output ;

non parameterized
parameterized
integer
character
parent class
child class 
student1 class
student2 class 
*/