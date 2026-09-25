#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

// Single inheritance
// person -> student
class Student : virtual public Person {
public:
    int rollNo;

    Student(string n, int a, int r)
        : Person(n, a) {
        rollNo = r;
    }
};

// Multilevel inheritance
// person-> student-> graduation student
class GraduationStudent : public Student {
public:
    string researchArea;

    GraduationStudent(string n, int a, int r, string area)
        : Person(n, a), Student(n, a, r) {
        researchArea = area;
    }

    void display() {
        cout << "Graduation Student: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

// Hierarchical inheritance
//person -> student 
// person -> teacher 
class Teacher : virtual public Person {
public:
    double salary;

    Teacher(string n, int a, double s)
        : Person(n, a) {
        salary = s;
    }
};

// Multiple + Hybrid inheritance
// person -> student (single inheritance)
// person -> teacher (single inheritance)
// student and teacher -> teaching assistant (multiple inheritance) 
// all together is hybrid inheritance  
class TeachingAssistant : public Student, public Teacher {
public:
    string department;

    TeachingAssistant(string n, int a, int r,
                      double s, string d)
        : Person(n, a),
          Student(n, a, r),
          Teacher(n, a, s) {
        department = d;
    }

    void display() {
        cout << "Teaching Assistant: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {

    GraduationStudent g(
        "Rahul", 24, 101, "Machine Learning"
    );

    cout << "--- Graduation Student ---" << endl;
    g.display();

    cout << endl;

    TeachingAssistant t(
        "Amit", 22, 102, 25000, "Computer Science"
    );

    cout << "--- Teaching Assistant ---" << endl;
    t.display();

    return 0;
}

/*
output :

--- Graduation Student ---
Graduation Student: Rahul
Age: 24
Roll Number: 101
Research Area: Machine Learning

--- Teaching Assistant ---
Teaching Assistant: Amit
Age: 22
Roll Number: 102
Salary: 25000
Department: Computer Science
*/