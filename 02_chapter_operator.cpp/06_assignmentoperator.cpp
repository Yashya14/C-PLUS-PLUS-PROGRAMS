#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int c;

    c = a;
    cout<<"Line 1 - = operator , value of c is : "<<c<<endl;

    c -= a;
    cout<<"Line 2 - -= operator , value of c is : "<<c<<endl;

    c += a;
    cout<<"Line 3 - += operator , value of c is : "<<c<<endl;

    c *= a;
    cout<<"Line 4 - *= operator , value of c is : "<<c<<endl;

    c /= a;
    cout<<"Line 5 - /= operator , value of c is : "<<c<<endl;

    c = 200;
    c %= a;
    cout<<"Line 6 - %= operator , value of c is : "<<c<<endl;

    c <<= a;
    cout<<"Line 7 - = operator , value of c is : "<<c<<endl;

    c >>= a;
    cout<<"Line 8 - = operator , value of c is : "<<c<<endl;

    c &= a;
    cout<<"Line 9 - &= operator , value of c is : "<<c<<endl;

    c ^= a;
    cout<<"Line 10 - ^= operator , value of c is : "<<c<<endl;

    c |= a;
    cout<<"Line 11 - |= operator , value of c is : "<<c<<endl;
    
    return 0;
}