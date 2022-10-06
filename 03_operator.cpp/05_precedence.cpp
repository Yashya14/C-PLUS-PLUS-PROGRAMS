#include <iostream>
#include<iomanip>

using namespace std;

int main()
 {
//   int a = 34;
//   cout<<"The value of a was: "<<a<<endl;
//   a = 23;
//   cout<<"The value of a is: "<<a<<endl;
   
//   constants in c++
//   const int a = 3;
//   cout<<"The value of a was: "<<a<<endl;
//   a = 12; // You will get an error because a is a constant
//   cout<<"The value of a is: "<<a<<endl;
    
    // Manipulators in c++
    // int a=2, b=44, c=6534;
    // cout<<"The value of a without setw  is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;
    
    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;
    
    // operator precedence
    int a = 4, b = 5;
    // int c = (a*5)+b;
    int c = (a*5)+b-10+2;
    cout<<c<<endl;
    
    return 0;
}