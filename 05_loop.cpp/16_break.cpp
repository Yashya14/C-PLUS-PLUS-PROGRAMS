// program of break statement 

#include<iostream>
using namespace std;

int main(){
    // for(int i=1;i<=10;i++){
    //     if(i==5){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }

    // program break statement with inner loop
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(i==2 && j==2){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}