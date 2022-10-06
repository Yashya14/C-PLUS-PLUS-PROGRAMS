// passing array to funtion to print minimum number 

#include<iostream>
using namespace std;

void printmin(int arr[5]);

int main(){
    int arr1[5] = {10,23,34,45,56};
    int arr2[5] = {12,22,36,76,66};
    printmin(arr1);
    printmin(arr2);
    return 0;
}

void printmin(int arr[5]){
    int min = arr[0];
    for(int i=0;i>5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Minimun element is : "<<min<<endl;
}