/*
destructor gets automatically called when the main function is getting to end and it prints im destructor and deletes the value
stored by the cgpa ptr in the RAM Heap. using destructor is important so that there is no unwanted space usedup in the heap. 
*/
#include<bits/stdc++.h>
using namespace std;

class college_student {
public:
    double *cgpa;

    college_student(double cgpa) {
        this->cgpa = new double(cgpa);
    }

    void getinfo(){
        cout<<"cgpa : "<<*cgpa<<endl;
    }
    // Destructor
    ~college_student() { 
        cout<<"im destructor"<<endl;
        delete cgpa;
    }
};

int main(){
    college_student c1(8.5);
    c1.getinfo();
}

/*
output : 
cgpa : 8.5
im destructor
*/