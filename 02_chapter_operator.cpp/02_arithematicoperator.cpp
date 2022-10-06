#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int c;

    c = a+b;
    cout<<"Line 1 - The value of c is "<<c<<endl;

    c = a-b;
    cout<<"Line 2 - The value of c is "<<c<<endl;

    c = a*b;
    cout<<"Line 3 - The value of c is "<<c<<endl;

    c = a/b;
    cout<<"Line 4 - The value of c is "<<c<<endl;

    c = a%b;
    cout<<"Line 5 - The value of c is "<<c<<endl;

    c++;
    cout<<"Line 6 - The value of c is "<<c<<endl;

    c--;
    cout<<"Line 7 - The value of c is "<<c<<endl;

    return 0;
}