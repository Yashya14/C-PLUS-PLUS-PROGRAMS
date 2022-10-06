// printing the address and value using pointer

#include<iostream>
using namespace std;

int main(){
    int num = 23;
    int* p = &num;

    cout<<"The address of num variable is "<<&num<<endl;;
    cout<<"The address of p is "<<p<<endl;
    cout<<"The value of p is "<<*p<<endl;

    return 0;
}