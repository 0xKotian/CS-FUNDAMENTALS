#include <iostream>
using namespace std;
/*
in shallow copy, wkt s1.marks is a ptr and it stores the address where 85 is stored. When another obj is created and copied then
s2.marks stores the same address of 85. *s2.marks (* is used to access the value of the address stored in s2.marks) is
changed to 90(from 85). now cout *s1.marks(means cout the value of the address stored in s1.marks) give 90 because s1.marks 
and s2.marks stores the same address of a single value and the value is changed.      
*/
class Student {
public:
    int *marks;

    Student(int marks) {
        this->marks = new int(marks);
    }
};

/*
in deep copy, wkt c1.cgpa is a ptr and it stores the address where 8.5 is stored. When another obj is created and copied then
c2.cgpa stores 8.5 but in different memory location created by new double(*obj.cgpa). *c2.cgpa (* is used to access the 
value of the address stored in c2.cgpa) is changed to 9.0(from 8.5). now cout *c1.cgpa(means cout the value of the address
stored in c1.cgpa) give 8.5 because c1.cgpa and c2.cgpa stores different address of 8.5 and the val is changed to 9.0 of only 
c2.cgpa address.  
*/
class college_student {
public:
    double *cgpa;

    college_student(double cgpa) {
        this->cgpa = new double(cgpa);
    }
    // deep copy
    college_student(college_student &obj){
        this->cgpa = new double(*obj.cgpa);
    }
};

int main() {
    Student s1(85);

    Student s2 = s1;  // Shallow copy
    cout <<"student 1 before changing marks of s2 : "<<*s1.marks << endl;
    *s2.marks = 90;
    cout <<"student 1 after changing the marks of s2 : "<<*s1.marks << endl;
    cout <<"student 2 : "<<*s2.marks << endl;

    college_student c1(8.5);
    college_student c2(c1); // deep copy
    cout<<"college student 1 cgpa before changing c2 : "<<*c1.cgpa<<endl;
    *c2.cgpa = 9.0;
    cout<<"college student 1 cgpa after changing c2 : "<<*c1.cgpa<<endl;
    cout<<"college student 2 cgpa  : "<<*c2.cgpa<<endl;
}

/*
output: 

student 1 before changing marks of s2 : 85
student 1 after changing the marks of s2 : 90
student 2 : 90
college student 1 cgpa before changing c2 : 8.5
college student 1 cgpa after changing c2 : 8.5
college student 2 cgpa  : 9
*/