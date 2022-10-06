#include<iostream>
using namespace std;

void fun(){
    int i=0; // local variable
    static int j=0; // static variable
    i++;
    j++;
    cout<<"i="<<i<<" and j="<<j<<endl;
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}