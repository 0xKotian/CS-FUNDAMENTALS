/*
here Teacher is the class and t1 and t2 are the objects oe entities that are created using class.

public access specifier is used so that the properties and methods can be used outside class.  
*/
#include<bits/stdc++.h>
using namespace std;

class Teacher {
public:
    // data or properties
    string name;
    string dept;
    string subject;
    
    // methods or member function 
    void changedept(string newDept){
        dept = newDept;
        cout<<"department changed to : "<<dept<<endl;
    }
};

int main(){
    Teacher t1;
    t1.name = "rahul";
    t1.subject = "c++";
    t1.dept = "computer science";

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<"after dept change"<<endl;
    t1.changedept("maths");

    Teacher t2;
    t1.name = "neha";
    t1.subject = "physics";
    t1.dept = "physics";

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<"after dept change"<<endl;
    t1.changedept("chemistry");
}