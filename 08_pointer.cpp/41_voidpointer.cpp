// void pointer

#include <iostream>
using namespace std;

int main()
{
    void *ptr; // void pointer declaration
    int a = 9; // integer variable initialization
    ptr = &a;  // storing the address of 'a' variable in void pointer variable

    cout << &a << endl;
    cout << ptr << endl;

    return 0;
}