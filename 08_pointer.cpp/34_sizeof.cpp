// printing the size of datatypes using sizeof() operator

#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    float b = 34.5;
    char c = 'y';
    double d = 56.7869;

    cout << "The value of a is " << a << " and size of a is " << sizeof(int)<<endl;
    cout << "The value of b is " << b << " and size of b is " << sizeof(float)<<endl;
    cout << "The value of c is " << c << " and size of c is " << sizeof(char)<<endl;
    cout << "The value of d is " << d << " and size of d is " << sizeof(d);
    

    return 0;
}