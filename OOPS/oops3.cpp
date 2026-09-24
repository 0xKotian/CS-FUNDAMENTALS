/*

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
    string college;

    // non parameterized constructor 
    Teacher(){
        college = "JSSSTU"; 
    }
    
};

class student {
public:
    string name;
    string dept;
    string college;
    
    //parameterized constructor 
    student(string n, string d,string clg){
       college = clg;
       dept = d;
       name = n;
    }

    student(student &obj){ // custom copy constrictor, used to manually assign the data of s1 to s2
        cout<<"im custom copy constructor"<<endl;
        this->college = obj.college;
        this->name = obj.name;
        this->dept = obj.dept;
    }

    void getinfo(){
        cout<<"student name : "<<name<<endl;
        cout<<"dept : "<<dept<<endl;
        cout<<"college : "<<college<<endl;
    }
    
};

class account{
private: 
    double balance;

public:
    string name;
    double account_number;
     // concept of this-> pointer: this pointer points to the class property/data. (used only when both names are same)
    account(string name,double account_number,double balance){
        this->name = name; // this->name is name defined in class ; name is constructor parameter i.e raju
        this->account_number =account_number;// thhis->account_number is account_number defined in class ; account_number is 452105 
        this->balance = balance;// this->balance is balance defned in class ; balance is 25000
    }

    void getdata(){
        cout<<"ac holder name : "<<name<<endl;
        cout<<"ac number : "<<account_number<<endl;
        cout<<"ac balance : "<<balance<<endl;        
    }
};

int main(){
    Teacher t1; // teacher constructor is called and clg is initialized   
    t1.name = "rahul";
    t1.subject = "c++";
    t1.dept = "computer science";
    cout<<"teacher name: "<<t1.name<<endl;
    cout<<"college is "<<t1.college<<endl<<endl;;

    student s1("pramukh","CSE","JSSSTU");
    s1.getinfo();
    cout<<endl;

    account A1("raju",452105,25000);
    A1.getdata();
    cout<<endl;

    Teacher t2(t1); // default copy constructor(used by compiler)  
    cout<<"teacher t2 name using copy constructer  : "<<t2.name<<endl;
    cout<<"dept : "<<t2.dept<<endl<<endl;;
    
    student s2(s1); // custom copy constructor(defined by user) is used 
    s2.getinfo();
}
/*
output : 

teacher name: rahul
college is JSSSTU

student name : pramukh
dept : CSE
college : JSSSTU

ac holder name : raju
ac number : 452105
ac balance : 25000

teacher t2 name using copy constructer  : rahul
dept : computer science

im custom copy constructor
student name : pramukh
dept : CSE
college : JSSSTU
*/