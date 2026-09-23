/*
hiding the important data in private access specifier is data hiding, these private properties can be accessed outside class by 
using public member functions like setter and getter  
*/
#include<bits/stdc++.h>
using namespace std;

class Teacher {
private: 
    double salary;
public:
    string name;
    string dept;
    string subject;
    
    void changedept(string newDept){
        dept = newDept;
        cout<<"department changed to : "<<dept<<endl;
    }
    // setter
    void initializeSalary(double sal){
        salary = sal;
    }
    // getter
    double getsalary(){
        cout<<"salary is rs"<<salary<<endl;
    }
};

int main(){
    Teacher t1;
    t1.name = "rahul";
    t1.subject = "c++";
    t1.dept = "computer science";
    // t1.salary = 25000; gives error because salary is defined as private and cannot be accessed outside class 

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<"after dept change"<<endl;
    t1.changedept("maths");
    //but if we want private propertes to be used then we can use setter and getter
    t1.initializeSalary(25000);
    t1.getsalary(); 
}
/*
output : 

rahul
computer science
after dept change
department changed to : maths
salary is rs25000
*/