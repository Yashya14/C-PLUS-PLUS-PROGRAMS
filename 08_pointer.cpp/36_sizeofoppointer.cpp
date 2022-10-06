// Prints the size of data types when an operand is of pointer type
#include <iostream>
using namespace std;

int main()
{
    int *ptr1 = new int(14);
    cout << "Size of ptr1 is " << sizeof(ptr1) << endl;
    cout << "Size of *ptr1 is " << sizeof(*ptr1) << endl;

    float *ptr2 = new float(14);
    cout << "Size of ptr2 is " << sizeof(ptr2) << endl;
    cout << "Size of *ptr2 is " << sizeof(*ptr2) << endl;

    double *ptr3 = new double(14);
    cout << "Size of ptr3 is " << sizeof(ptr3) << endl;
    cout << "Size of *ptr3 is " << sizeof(*ptr3) << endl;

    return 0;
}