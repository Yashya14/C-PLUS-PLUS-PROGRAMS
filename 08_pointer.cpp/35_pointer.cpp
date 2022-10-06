// Prints the size of data types, arrays and class

#include <iostream>
using namespace std;

class base{
    int a;
    int b;
    char c;
};

// void fun(int arr[]){

//     cout<<"Size of array variable is "<<sizeof(arr)<<" byte"<<endl; // it print the size of interger pointer int* 
// }

int main()
{
    // cout << "Size of integer variable : " << sizeof(int) << " byte" << endl;
    // cout << "Size of floating variable : " << sizeof(float) << " byte" << endl;
    // cout << "Size of double variable : " << sizeof(double) << " byte" << endl;
    // cout << "Size of char variable : " << sizeof(char) << " byte" << endl;

    base b;
    cout<<"Size of class base is "<<sizeof(b)<<" byte"<<endl;

    int arr[] = {10,20,30,40,50};
    cout<<"Size of array variable is "<<sizeof(arr)<<" byte"<<endl;

    // fun(arr);

    return 0;
}