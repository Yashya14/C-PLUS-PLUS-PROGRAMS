// program of call by value

#include<iostream>
using namespace std;

void change(int data){
    data = 10;

}
int main(){
    int data = 4;
    change(data);
    cout<<"Value of the data is "<<data<<endl;
    return 0;
}

// void change(int data){
// }