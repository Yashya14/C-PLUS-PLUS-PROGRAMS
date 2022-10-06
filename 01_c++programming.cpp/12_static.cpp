#include<iostream>
using namespace std;
void fun(void);
static int count = 10;

int main(){
    while(count--){
        fun();
    }
    return 0;
}

void fun(void){
    static int i = 5;
    i++;
    cout<<"i is "<<i;
    cout<<" and count is "<<count<<endl;

}