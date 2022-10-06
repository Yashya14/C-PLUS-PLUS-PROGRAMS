// c++ program to find the largest number among three number

#include<iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"Enter the value of a b and c :"<<endl;
    cin>>a>>b>>c;

    if((a>=b) && (a>=c)){
        cout<<"a is largest number"<<endl;
    }else if((b>=a) && (b>=c)){
        cout<<"b is largest number"<<endl;
    }else{
        cout<<"c is largest number";
    }
    return 0;
}