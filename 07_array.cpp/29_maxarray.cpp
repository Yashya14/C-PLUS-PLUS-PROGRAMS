// passing array to funtion to print maximum number

#include <iostream>
using namespace std;

void printmax(int arr[5]);

int main()
{
    int arr1[5] = {10, 23, 34, 45, 56};
    int arr2[5] = {12, 22, 36, 76, 66};
    printmax(arr1);
    printmax(arr2);
    return 0;
}

void printmax(int arr[5])
{
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Maximun element is : " << max << endl;
}