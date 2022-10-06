// program of if-else statement 

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;

    if(num<10){
        cout<<num<<" is less than 10"<<endl;
    }else{
        cout<<num<<" is greater than 10";
    }
    return 0;
}