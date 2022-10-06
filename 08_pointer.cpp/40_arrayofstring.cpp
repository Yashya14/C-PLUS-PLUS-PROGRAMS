// Array of pointer to string

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char *names[5] = {
        "varsha",
        "yash",
        "radha",
        "tanu",
        "harsha",
    };

    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}