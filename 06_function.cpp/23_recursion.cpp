// program of recursion to print factorial number

#include<iostream>
using namespace std;

int main(){
    int factorial(int);
    int fact,num;
    cout<<"Enter the number : ";
    cin>>num;

    fact = factorial(num);
    cout<<"Thr factorial of a number is "<<fact<<endl;

    return 0;
}

int factorial(int n){
    if(n<0){
        return(-1);
    }if(n==0){
        return(1);
    }else{
        return(n*factorial(n-1));
    }
}