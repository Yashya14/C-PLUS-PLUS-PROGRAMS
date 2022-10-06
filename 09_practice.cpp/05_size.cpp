// c++ program to find the size of int, float, double, and char 

#include<iostream>
using namespace std;

int main(){
    int a ;
    float b;char c; double d;

    cout<<"The  size of a is "<<sizeof(int)<<" byte "<<endl;
    cout<<"The  size of b is "<<sizeof(float)<<" byte "<<endl;
    cout<<"The  size of c is "<<sizeof(char)<<" byte "<<endl;
    cout<<"The  size of d is "<<sizeof(double)<<" byte "<<endl;

return 0;
}