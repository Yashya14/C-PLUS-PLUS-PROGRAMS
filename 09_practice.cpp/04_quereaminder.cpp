// c++ program to find the quotient and remainder 

#include<iostream>
using namespace std;

int main(){
    int divisor, quotient, remainder, dividend;

    cout<<"Enter the value of dividend : "<<endl;
    cin>>dividend;

    cout<<"Enter the value of divisor : "<<endl;
    cin>>divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout<<"quotient is "<<quotient<<endl;
    cout<<"remainder is "<<remainder;
    
return 0;
}