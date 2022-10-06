#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    
    // // 
    // if(age<18){
    //     cout<<"You can not came to the party"<<endl;
    // }else if (age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if (age<1){
    //     cout<<"You are yet born"<<endl;
    // }
    // else{
    //     cout<<"You can came to the party"<<endl;
    // }
    
    // selection control structure structure : switch case statements
    switch(age){
        case 18:
        cout<<"You are 18"<<endl;
        break;
        
        case 12:
        cout<<"You are 12"<<endl;
        break;
        
        case 10:
        cout<<"You are 10"<<endl;
        break;
        
        default:
        cout<<"You are not "<<endl;
    }
    
    return 0;
}