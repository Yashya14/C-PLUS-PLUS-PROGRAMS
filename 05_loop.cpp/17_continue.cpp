// program of continue statement

#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=10;i++){
        if(i==4){
            continue;
        }
        cout<<i<<endl;
    }

    // program of continue statement with inner loop
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=4;j++){
    //         if(i==2 && j==2){
    //             continue;
    //         }
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }
    return 0;
}