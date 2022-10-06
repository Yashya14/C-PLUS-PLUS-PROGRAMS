#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 10;

   if(a && b){
       cout<<"Line 1 - Condition is true "<<endl;
   }

   if(a || b){
       cout<<"Line 2 - Condition is true "<<endl;
   }
    // lets change the values of a and b 
    a = 0;
    b = 10;

   if(a && b){
       cout<<"Line 3 - Condition is true "<<endl;
   }else{
       cout<<"Line 3 - Condition is false"<<endl;
   }

   if(!(a && b)){
       cout<<"Line 4 - Condition is true "<<endl;
   }
   
    return 0;
}