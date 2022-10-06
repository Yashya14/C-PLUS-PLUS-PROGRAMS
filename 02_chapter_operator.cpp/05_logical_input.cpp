#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;

    if(age>18 && age<80){
        cout<<"You can drive"<<endl;

    }if(age == 18){
        cout<<"You are 18 and you can drive"<<endl;
    }
    else{
        cout<<"You cannot drive"<<endl;
    }

    return 0;
}