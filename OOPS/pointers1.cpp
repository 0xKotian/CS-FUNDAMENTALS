#include<bits/stdc++.h>
using namespace std;

void increase(int &y){ // pass by reference using alias. & here means y is alias for the original varible c 
    y = 2000;          
}

void update(int *ptr){ // pass by reference using pointer 
    *ptr = 200;
}

void change(int x){ // pass by value 
    x = 20;
}

int main(){
    int a = 10;
    change(a);//a copy of a is sent to the function and there it has change to 20  
    cout<<a<<endl;

    int b = 100;
    update(&b); // address of b is sent to the function 
    cout<<b<<endl; 

    int c = 1000;
    increase(c);// the variable itself is sent to the fuunction but with different name i.e y 
    cout<<c<<endl;
}