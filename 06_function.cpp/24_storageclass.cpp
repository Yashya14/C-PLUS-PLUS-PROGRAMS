// program of storage class local and static variable

#include<iostream>
using namespace std;

int k ; // 
void fun(){
    int i = 0; // local variable
    static int j = 0; // static variable
    i++;
    j++;
    cout<<"The value of i = : "<<i<<" and j = "<<j<<endl;

}
int main(){
    fun();
    fun();
    fun();
    cout<<"The value of k is "<<k<<endl;
    return 0;
}