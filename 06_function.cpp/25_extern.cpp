// program of extern storage class

#include<iostream>
using namespace std;

extern int a = 45;
int b = 34;

int main(){
    extern int b;
    cout<<"The value of extern variables a and b "<<a<<ends<<b<<endl;
    a = 15;
    cout<<"The value of modified extern variable a is "<<a<<endl;

    return 0;
}