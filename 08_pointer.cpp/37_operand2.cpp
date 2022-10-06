// when an operand is an expression prints the size of datatypes

#include <iostream>
using namespace std;

int main()
{
    int num1;
    double num2;
    cout << "Size of num1+num2 is " << sizeof(num1 + num2) << endl;

    return 0;
}