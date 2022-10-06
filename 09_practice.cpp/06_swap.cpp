// c++ program to swap two numbers

#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 6, temp;

    cout<<"Before swapping a and b is "<<a<<" and "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"\nAfter swapping a and b is "<<a<<" and "<<b<<endl;

    return 0;

}