#include <iostream>
// There are two header files :
// 1.system header files: It comes with compiler
// 2.user defined header files: it is written by programmer
// #include"this.h" : this will produced an error if the this.h is not present in the current directory
using namespace std;

int main() {
    int a=4, b=5;
    cout<<"Operators in c++: "<<endl;
    cout<<"Following are the types of operaters in cpp "<<endl;
    // Arithematic operators
    
    cout<<"The value of a + b is : "<<a+b<<endl;
    cout<<"The value of a - b is : "<<a-b<<endl;
    cout<<"The value of a * b is : "<<a*b<<endl;
    cout<<"The value of a / b is : "<<a/b<<endl;
    cout<<"The value of a % b is : "<<a%b<<endl;
    cout<<"The value of a++ is : "<<a++<<endl;
    cout<<"The value of a-- b is : "<<a--<<endl;
    cout<<"The value of ++a is : "<<++a<<endl;
    cout<<"The value of --a is : "<<--a<<endl;
    cout<<"The value of a + b is : "<<a+b<<endl;
    // Assignment operators --> used to assign the values
    // int a = 3, b = 4;
    // char a ='t';
    
    // Comparison operators
    cout<<"Following are the comparison operators in c++ :"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    
    // Logical operators
    cout<<"Following are the logical operators in c++ :"<<endl;
    cout<<"The value of ((a==b) && (a<b)) and logical operator is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a==b) && (a>b)) and logical operator is "<<((a==b) && (a>b))<<endl;
    cout<<"The value of ((a==b) || (a>b)) or logical operator is "<<((a==b) || (a>b))<<endl;
    cout<<"The value of (!(a==b)) not logical operator is "<<(!(a==b))<<endl;
    
    
    return 0;
}
