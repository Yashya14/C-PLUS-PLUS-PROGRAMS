// program of switch statement 

#include<iostream>
using namespace std;

int main(){
    int age = 18;
    
    switch (18)
    {
    case 10:
        cout<<"Your age is 10";
        break;
    case 12:
        cout<<"Your age is 12";
        break;
    case 16:
        cout<<"Your age is 16"; 
        break; 
    case  18:
        cout<<"Your age is 18";
        break;
    default:
        cout<<"Enter your proper age";
        break;
    }

    return 0;
}