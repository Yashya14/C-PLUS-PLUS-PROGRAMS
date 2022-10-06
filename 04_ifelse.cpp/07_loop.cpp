#include <iostream>

using namespace std;

int main()
{
    // There are three types of loops in c++
    // 1.for loops
    // 2.while loop
    // 3.do-while loop
    
    // Syntax of for loop
    // for(initialization; condition; updation){
    //     body (code in )
    // }
    
    // for(int i=1;i<=10;i++){
    //     cout<<i<<endl;
    // }
    
    // Example of infinite for loop
    // for(int i=1;3<=10;i++){
    //     cout<<i<<endl;
    // }
    
    // ******** While loop********
    /* syntax :
    while(condition){
        c++ statement;
    }
    */
    
    // cout<<"Printing the numbers between 1 to 40"<<endl;
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }
    
    // Example of infinite while loop
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    // }
    
    // ********* Do-while*********
    /* syntax :
    do{
        c++ statement;
    }while(condition);
    */
    
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=10);
    
    // multiplication table using loop
    int  num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    for(int i=1; i<=10; i++)
    {
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
    
    }
    return 0;
    
}