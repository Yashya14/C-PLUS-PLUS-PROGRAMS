// program of call by refrence

#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}

int main(){
    int x = 500; int y = 100;
    cout<<"Before swap the value of x = "<<x<<" and y = "<<y<<endl;
    swap(&x,&y);
    cout<<"After swap the value of x = "<<x<<" and y = "<<y<<endl;
    
    return 0;
}