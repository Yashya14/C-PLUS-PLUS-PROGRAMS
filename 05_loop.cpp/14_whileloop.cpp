// program of while loop

#include<iostream>
using namespace std;

int main(){
    int i = 1;
    // while(i<=10){
    //     cout<<i<<endl;
    //     i++;
    // }

    while(i<=3){
        int j=1;
        while(j<=3){
            cout<<i<<" "<<j<<endl;
            j++;
        }
        i++;
    }

    // program of infinite while loop
    // while(true){
    //     cout<<"Infinite loop";
    // }

    return 0;
}