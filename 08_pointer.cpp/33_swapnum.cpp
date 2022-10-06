//  Swapping the two numbers without using third number

#include <iostream>
using namespace std;

int main()
{
    int a = 20, b = 10, *p1 = &a, *p2 = &b;
    cout << "Before swapping : *p1 = " << *p1 << " and *p2 = " << *p2 << endl;
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    cout << "After swapping : *p1 = " << *p1 << " and *p2 = " << *p2 << endl;

    return 0;
}