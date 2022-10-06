#include <iostream>

using namespace std;
int c = 45;
int main()
{
    // ********** Build in data types**********
    // int a,b,c;
    // cout<<"Enter the value of a :"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b :"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The value of c is "<<c<<endl;
    // cout<<"The global c is :"<<::c; // :: --> This is scope resolution operator
    
    // *********** Float, double and long double Literals*********
    // float d=23.4;
    // long double e = 23.4;
    // cout<<"The size of 23.4 is "<<sizeof(23.4)<<endl;
    // cout<<"The size of 23.4f is "<<sizeof(23.4f)<<endl;
    // cout<<"The size of 23.4F is "<<sizeof(23.4F)<<endl;
    // cout<<"The size of 23.4l is "<<sizeof(23.4l)<<endl;
    // cout<<"The size of 23.4L is "<<sizeof(23.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    
    // ********Refrence variables**********
    // Yash--> yashya-->yashu-->dangerous coder
    float x = 54;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    
    // ************ Typecasting**********
    int a = 34;
    float b = 45.54;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);
    
    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a +(int)b<<endl;
    cout<<"The expression is "<<a +int(b)<<endl;
    
    return 0;
}