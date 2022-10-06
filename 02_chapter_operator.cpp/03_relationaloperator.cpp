#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;

    if(a==b){
        cout<<"Line 1 - a is equal to b "<<endl;
    }else{
        cout<<"Line 1 - a is not equal to b "<<endl;
    }

    if(a<b){
        cout<<"Line 2 - a is less than b"<<endl;
    }else{
        cout<<"Line 2 - a is greater than b"<<endl;
    }

    if(a>b){
        cout<<"Line 3 - a is less than b"<<endl;
    }else{
        cout<<"Line 3 - a is greater than b"<<endl;
    }
 
    a = 2;
    b = 5;
    if(a<=b){
        cout<<"Line 4 - a is  either less than equal to b "<<endl;
    }

    if(a>=b){
        cout<<"Line 5 - a is either less than equal to b"<<endl;
    }else{
        cout<<"Line 5 - b is either greater than equal to a"<<endl;
    }
    return 0;
}