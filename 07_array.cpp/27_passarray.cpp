// passing an array to the function

#include<iostream>
using namespace std;

void PrintArray(int arr[5]);

int main (){
    int arr1[5] = {10,22,33,44,55};
    int arr2[5] = {11,20,38,49,50};
    PrintArray(arr1);
    PrintArray(arr2);

    return 0;
}

void PrintArray(int arr[5]){
    cout<<"Printing an array elements : "<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}