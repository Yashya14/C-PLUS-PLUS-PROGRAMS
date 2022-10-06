// c++ program to check whether the given alphabet is vowel or consonant 

#include<iostream>
using namespace std;

int main(){
    char c;
    
    cout<<"Enter an alphabet : "<<endl;
    cin>>c;

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        cout<<"The given alphabet is vowel"<<endl;
    }else{
        cout<<"The given alphabet is consonant"<<endl;
    }

return 0;
} 
