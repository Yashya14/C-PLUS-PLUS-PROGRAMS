// c++ program to find the number is odd or even 

#include<iostream>
using namespace std;

int main(){
    int a ,num;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;

    if(a%2 == 0){
        cout<<"The number is even";
    }else{
        cout<<"The number is odd";
    }

    return 0;
}